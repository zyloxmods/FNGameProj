#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAthenaAIBotNameRegionData.h"
#include "FortAthenaAIBotNameDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UFortAthenaAIBotNameDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DefaultNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ChinaNameDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaAIBotNameRegionData> RegionData;
    
public:
    UFortAthenaAIBotNameDataAsset();
};

