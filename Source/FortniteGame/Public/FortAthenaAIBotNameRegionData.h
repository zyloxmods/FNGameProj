#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotNameRegionData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FFortAthenaAIBotNameRegionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegionId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> NameDataTable;
    
public:
    FORTNITEGAME_API FFortAthenaAIBotNameRegionData();
};

