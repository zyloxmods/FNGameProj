#pragma once
#include "CoreMinimal.h"
#include "EItemRecyclingRestrictionReason.generated.h"

UENUM(BlueprintType)
enum class EItemRecyclingRestrictionReason : uint8 {
    InnatelyUnrecyclable,
    IsSlottedGroundOperative,
    MissingCatalyst,
    ItemOutOnExpedition,
    InUseByCrafting,
    MulchingNotAllowed,
    IsSlottedAttributeWorker,
};

