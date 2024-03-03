#pragma once
#include "CoreMinimal.h"
#include "AIHotSpotSlotGenerator_OnBoundingBox.h"
#include "FortAIHotSpotSlotGenerator_OnBoundingBox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator_OnBoundingBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForRangedSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForHugeSlots;
    
    UFortAIHotSpotSlotGenerator_OnBoundingBox();
};

