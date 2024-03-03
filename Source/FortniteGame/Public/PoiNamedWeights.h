#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PairedWeightContainer.h"
#include "PoiNamedWeights.generated.h"

UCLASS(Blueprintable)
class UPoiNamedWeights : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FPairedWeightContainer> LocationSpecifiedEntries;
    
    UPoiNamedWeights();
};

