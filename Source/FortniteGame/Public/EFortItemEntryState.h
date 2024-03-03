#pragma once
#include "CoreMinimal.h"
#include "EFortItemEntryState.generated.h"

UENUM(BlueprintType)
enum class EFortItemEntryState :uint8 {
        NoneState,
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
    };


