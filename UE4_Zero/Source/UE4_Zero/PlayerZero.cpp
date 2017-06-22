// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "PlayerZero.h"

#include "PlayerMovement.h"

#include "PaperFlipbookComponent.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::White,text)

// Sets default values
APlayerZero::APlayerZero()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// sets up the position of the camera relative 
	m_CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	m_CameraArm->SetupAttachment(RootComponent);
	m_CameraArm->RelativeRotation = FRotator(-30.0f, 0.0f, 0.0f);
	m_CameraArm->TargetArmLength = 400.0f;
	m_CameraArm->bEnableCameraLag = true;
	m_CameraArm->CameraLagSpeed = 3.0f;

	// creates a camera and attaches it to the spring arm
	UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	Camera->SetupAttachment(m_CameraArm, USpringArmComponent::SocketName);

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	m_Movement = CreateDefaultSubobject<UPlayerMovement>(TEXT("CustomMovement"));

	m_Movement->UpdatedComponent = RootComponent;

	//m_Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite"));

	m_Sprite = CreateDefaultSubobject<UPaperFlipbookComponent>("Sprite");

	// checks the sprite creation was sucsesful before modifying it
	if (m_Sprite)
	{
		m_Sprite->SetupAttachment(GetCapsuleComponent());
		m_Sprite->SetFlipbook(m_StandAnim);
	}

	m_NextAnimation = m_StandAnim;

}

// Called when the game starts or when spawned
void APlayerZero::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerZero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// checks if the animation needs to change
	if (m_Sprite->GetFlipbook() != m_NextAnimation)
	{
		// sets the new animation to play
		m_Sprite->SetFlipbook(m_NextAnimation);
	}

	m_NextAnimation = m_StandAnim;

}

// Called to bind functionality to input
void APlayerZero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// assigns the axis inputs to call a required function so the inputs can be checked
	InputComponent->BindAxis("Vertical", this, &APlayerZero::SetVerticalVelocity);
	InputComponent->BindAxis("Horizontal", this, &APlayerZero::MoveHorizontal);
}

void APlayerZero::MoveHorizontal(float value)
{
	if (m_Movement && (m_Movement->UpdatedComponent == RootComponent))
	{
		if (value > 0.0f)
		{
			m_NextAnimation = m_WalkAnim;

			if (!m_faceing_Left_Right)
			{
				FlipCharicter();
			}

			m_faceing_Left_Right = true;
		}
		else if (value < 0.0f)
		{
			m_NextAnimation = m_WalkAnim;

			if (m_faceing_Left_Right)
			{
				FlipCharicter();
			}

			m_faceing_Left_Right = false;
		}

		m_Movement->AddInputVector(GetActorRightVector() * value);
	}
}

void APlayerZero::SetVerticalVelocity(float value)
{
	if (m_Movement && (m_Movement->UpdatedComponent == RootComponent))
	{
		if (value != 0.0f)
		{
			// if there is vertical movement sets the animation to walking
			m_NextAnimation = m_WalkAnim;
		}

		m_Movement->AddInputVector(GetActorForwardVector() * value);
	}
}

UPawnMovementComponent * APlayerZero::GetMovementComponent() const
{
	return m_Movement;
}

void APlayerZero::FlipCharicter()
{
	// rotates the playes sprite to face the direction of there input

	if (m_faceing_Left_Right)
	{
		m_Sprite->SetWorldRotation(FRotator(0.0f, 270.0f, 0.0f));
	}
	else
	{
		m_Sprite->SetWorldRotation(FRotator(0.0f, 90.0f, 0.0f));
	}
}

