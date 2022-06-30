// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "WeaponPickup.generated.h"

/**
 * 
 */
UCLASS()
class PORTALGAMEENGINESII_API AWeaponPickup : public APickup
{
	GENERATED_BODY()

protected:
	virtual void PickupOverlapAction() override;
	virtual void OnRespawnTimerFinished() override;
	virtual void OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

private:
	UPROPERTY(EditAnywhere)
	bool bCanOnlyRespawnAfterOwnerDies = false;
};
