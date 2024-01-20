#pragma once
#include "CoreMinimal.h"
#include "AIHotSpotSlotInfo.h"
#include "AIHotSpotUseInfo.generated.h"

USTRUCT(BlueprintType)
struct FAIHotSpotUseInfo : public FAIHotSpotSlotInfo {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FAIHotSpotUseInfo();
};

