#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortItemEntryState : uint8 
{
	NewItemCount,
	ShouldShowItemToast,
	DurabilityInitialized,
	DoNotShowSpawnParticles,
	FromRecoveredBackpack,
	FromGift,
	PendingUpgradeCriteriaProgress,
	OwnerBuildingHandle,
	FromDroppedPickup,
	JustCrafted,
	CraftAndSlotTarget,
	GenericAttributeValueSet,
	PickupInstigatorHandle,
	RechargingWeaponServerTime,
	DisallowSwapOnNextPickUpAttempt,
	DroppedByAI,
	EFortItemEntryState_MAX,
};
