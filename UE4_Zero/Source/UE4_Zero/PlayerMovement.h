// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PawnMovementComponent.h"
#include "PlayerMovement.generated.h"

/**
 * 
 */
UCLASS()
class UE4_ZERO_API UPlayerMovement : public UPawnMovementComponent
{
	GENERATED_BODY()
	
public:

	virtual void TickComponent(float dt, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickComponent) override;

	class UPaperFlipbookComponent* m_Sprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* m_StandAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* m_WalkAnim;
	
private:

	float m_playerSpeed = 350.0f;


};
