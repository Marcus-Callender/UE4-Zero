// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "Bullet.h"


// Sets default values
ABullet::ABullet()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_colider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	
	m_colider->InitSphereRadius(15.0f);
	m_colider->bGenerateOverlapEvents = true;
	//m_colider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	m_colider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	RootComponent = m_colider;

	m_projecileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	m_projecileMovement->SetUpdatedComponent(m_colider);
	m_projecileMovement->InitialSpeed = 3000.0f;
	m_projecileMovement->MaxSpeed = 3000.0f;
	m_projecileMovement->bRotationFollowsVelocity = true;
	m_projecileMovement->bShouldBounce = true;
	m_projecileMovement->Bounciness = 0.3f;

	MoveIgnoreActorAdd(Instigator);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABullet::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABullet::Fire(const FVector & dir)
{
	m_projecileMovement->Velocity = dir * m_projecileMovement->InitialSpeed;
}

