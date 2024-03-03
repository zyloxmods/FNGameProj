#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ObjectCostContainer.h"
#include "AssetObjectCostAccountant.generated.h"

UCLASS(Blueprintable)
class UAssetObjectCostAccountant : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectCostContainer CostContainer;
    
public:
    UAssetObjectCostAccountant();
};

