#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCreativeAssetCostData.h"
#include "CreativeAssetCostDirectory.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UCreativeAssetCostDirectory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeAssetCostData CostDirectory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> ComponentSimulationCostDirectory;
    
    UCreativeAssetCostDirectory();
};

