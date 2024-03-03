#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortCollectionDataEntry.h"
#include "FortCollectionDataEntryFish.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortCollectionDataEntryFish : public UFortCollectionDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsProFishingRod;
    
    UFortCollectionDataEntryFish();
};

