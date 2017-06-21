// Fill out your copyright notice in the Description page of Project Settings.

#include "UE4_Zero.h"
#include "PlayerMovement.h"

#include "PaperFlipbookComponent.h"

void UPlayerMovement::TickComponent(float dt, ELevelTick TickType, FActorComponentTickFunction * ThisTickComponent)
{
	Super::TickComponent(dt, TickType, ThisTickComponent);

	// if there is any reson this souldent update it will skip it's update
	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(dt))
	{
		return;
	}

	// creates a vector by multplying the direction to move, time taken in this frame and player speed 
	FVector ToMove = ConsumeInputVector().GetClampedToMaxSize(1.0f) * dt * m_playerSpeed;

	UPaperFlipbook* DesiredAnimation = (ToMove.IsNearlyZero()) ? m_WalkAnim : m_StandAnim;
	
	if (!ToMove.IsNearlyZero())
	{
		FHitResult Hit;

		SafeMoveUpdatedComponent(ToMove, UpdatedComponent->GetComponentRotation(), true, Hit);

		if (Hit.IsValidBlockingHit())
		{
			// if the charicter colides with a surface it will slide allong it
			SlideAlongSurface(ToMove, 1.0f - Hit.Time, Hit.Normal, Hit);
		}
	}
}
