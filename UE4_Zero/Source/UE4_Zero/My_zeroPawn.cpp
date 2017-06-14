// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "My_zeroPawn.h"


// Sets default values
AMy_zeroPawn::AMy_zeroPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//m_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	//m_camera->SetupAttachment(this);
	//m_camera->SetRelativeLocation(FVector(0.0f, -50.0f, 2.0f));

	//m_camera->AddLocalOffset(FVector(10.0f, 0.0f, 2.0f));

	
}

// Called when the game starts or when spawned
void AMy_zeroPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMy_zeroPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MoveTo = GetActorLocation();

	MoveTo += GetActorRightVector() * m_moveTo.X;
	MoveTo += (GetActorUpVector() * m_moveTo.Y) * 3.0f;

	SetActorLocation(MoveTo, true);
	//SetActorLocation(MoveTo, false);
	m_moveTo.X = 0.0f;
	m_moveTo.Y = 0.0f;

}

// Called to bind functionality to input
void AMy_zeroPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &AMy_zeroPawn::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AMy_zeroPawn::MoveVertical);

}

void AMy_zeroPawn::MoveHorizontal(float value)
{
	m_moveTo.X = value;
}

void AMy_zeroPawn::MoveVertical(float value)
{
	m_moveTo.Y = value;
}


