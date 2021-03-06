// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "PlayerZero.generated.h"

UCLASS()
class UE4_ZERO_API APlayerZero : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerZero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	class UPlayerMovement* m_Movement;

	//virtual Umy_customMovement* GetMovementComponent() const override;
	virtual UPawnMovementComponent* GetMovementComponent() const override;

	void MoveHorizontal(float value);
	void SetVerticalVelocity(float value);

private:

	void FlipCharicter();
	void FireBullet();
	void TickShoot();

	bool m_faceing_Left_Right = false;

	class USpringArmComponent* m_CameraArm;
	class UPaperFlipbook* m_NextAnimation;

	UCapsuleComponent* m_collider;

	FVector* m_dir;
	FVector* m_newDir;

	enum E_Attack m_currentAttack;


public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
		class UPaperFlipbookComponent* m_Sprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* m_StandAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* m_WalkAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* m_ShootAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* m_SwordAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector m_projectileOffset;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABullet> m_Bullet;

	void Attack();

};
