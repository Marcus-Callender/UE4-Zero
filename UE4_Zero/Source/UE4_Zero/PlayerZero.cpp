// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "PlayerZero.h"

#include "PlayerMovement.h"

#include "PaperFlipbookComponent.h"

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

	//m_Movement = CreateDefaultSubobject<UPlayerMovement>(TEXT("CustomMovement"));
	//
	//m_Movement->UpdatedComponent = RootComponent;
	//
	//m_Movement->m_Sprite = CreateOptionalDefaultSubobject<UPaperFlipbookComponent>(TEXT("Sprite0"));
	
	TArray<UStaticMeshComponent*> Comps;

	GetComponents(Comps);

	if (Comps.Num() > 0)
	{
		UStaticMeshComponent* FoundComp = Comps[0];
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Blue, Comps[0]->GetName());
		//do stuff with FoundComp
	}

	TArray<UPaperFlipbookComponent*> Found;

	GetComponents(Found);

	if (Found.Num() > 0)
	{
		UPaperFlipbookComponent* FoundComp = Found[0];

		//if (FoundComp != nullptr)
		//{
		//	//FoundComp->SetActive(false);
		//}
		//else
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Find failed"));
		//}
	}

	UPaperFlipbookComponent* MyComp = Cast<UPaperFlipbookComponent>(this->GetComponentByClass(UPaperFlipbookComponent::StaticClass()));

	if (MyComp)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Componant Found: True"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Componant Found: False"));
	}

	//getcomp
	//
	//AActor* foundObject = RootComponent->GetComponentByClass(UPaperFlipbookComponent::StaticClass();
	//
	//if ()
	//
	//m_Movement->m_Sprite = Cast<UPaperFlipbookComponent>());

	if (GEngine)
	{
		if (InputEnabled())
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Input Enabled: True"));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Input Enabled: False"));
		}
	}
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

}

// Called to bind functionality to input
void APlayerZero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Vertical", this, &APlayerZero::SetVerticalVelocity);
	InputComponent->BindAxis("Horizontal", this, &APlayerZero::MoveHorizontal);
}

void APlayerZero::MoveHorizontal(float value)
{
	if (m_Movement && (m_Movement->UpdatedComponent == RootComponent))
	{
		if (value > 0.0f)
		{
			if (!m_faceing_Left_Right)
			{
				FlipCharicter();
			}

			m_faceing_Left_Right = true;
		}
		else if (value < 0.0f)
		{
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
		m_Movement->AddInputVector(GetActorForwardVector() * value);
	}
}

UPawnMovementComponent * APlayerZero::GetMovementComponent() const
{
	return m_Movement;
}

void APlayerZero::FlipCharicter()
{
	if (m_faceing_Left_Right)
	{
		//EDIT
		//m_Movement->m_Sprite->SetRelativeLocation(FVector(-30.0f, 0.0f, 90.0f));

		m_CameraArm->RelativeRotation = FRotator(-30.0f, 180.0f, 0.0f);
	}
	else
	{
		//m_Movement->m_Sprite->SetRelativeLocation(FVector(30.0f, 0.0f, 270.0f));

		m_CameraArm->RelativeRotation = FRotator(-30.0f, 0.0f, 0.0f);
	}
}

