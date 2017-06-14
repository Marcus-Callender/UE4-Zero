// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "ZeroCharicter.h"


// Sets default values
AZeroCharicter::AZeroCharicter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AZeroCharicter::BeginPlay()
{
	Super::BeginPlay();

	bSimGravityDisabled = true;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Green, TEXT("Zero, Ready!"));
	}
}

// Called every frame
void AZeroCharicter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MoveTo = GetActorLocation();

	MoveTo += GetActorRightVector() * m_moveTo.X;
	MoveTo += (GetActorUpVector() * m_moveTo.Y) * 3.0f;

	SetActorLocation(MoveTo, true);
	m_moveTo.X = 0.0f;
	m_moveTo.Y = 0.0f;
}

// Called to bind functionality to input
void AZeroCharicter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAxis("Horizontal", this, &AZeroCharicter::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AZeroCharicter::MoveVertical);
}

void AZeroCharicter::MoveHorizontal(float value)
{
	m_moveTo.X = value;
}

void AZeroCharicter::MoveVertical(float value)
{
	m_moveTo.Y = value;
}

