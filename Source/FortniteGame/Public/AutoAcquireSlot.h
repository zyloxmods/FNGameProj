#pragma once
#include "CoreMinimal.h"
#include "AIHotSpotSlotInfo.h"
#include "AutoAcquireSlot.generated.h"

USTRUCT(BlueprintType)
struct FAutoAcquireSlot : public FAIHotSpotSlotInfo {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FAutoAcquireSlot();
};

