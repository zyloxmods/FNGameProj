#pragma once
#include "CoreMinimal.h"
#include "EBuildingGameplayActorSentry_State.generated.h"

UENUM(BlueprintType)
enum class EBuildingGameplayActorSentry_State : uint8 {
    PassiveIdle,
    ActiveIdle,
    Tracking,
    Aggro,
    Dormant,
    Deactivated,
    ReturningToIdle,
    LocatingDamager,
    EBuildingGameplayActorSentry_MAX UMETA(Hidden),
};

