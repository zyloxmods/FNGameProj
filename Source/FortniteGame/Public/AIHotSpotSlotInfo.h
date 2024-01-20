#pragma once
#include "CoreMinimal.h"
#include "AIHotSpotSlotInfo.generated.h"

class AAIHotSpot;

USTRUCT(BlueprintType)
struct FAIHotSpotSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIHotSpot* HotSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    FORTNITEGAME_API FAIHotSpotSlotInfo();
};

