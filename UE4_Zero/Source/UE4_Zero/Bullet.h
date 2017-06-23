// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Bullet.generated.h"

UCLASS()
class UE4_ZERO_API ABullet : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABullet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Fire(const FVector& dir);

	UPROPERTY (VisibleDefaultsOnly, Category = Projectile)
		USphereComponent* m_colider;

	// a class provided by UE4 for controling a projectiles movement
	UPROPERTY (VisibleAnywhere, Category = Movement)
		UProjectileMovementComponent* m_projecileMovement;
};
