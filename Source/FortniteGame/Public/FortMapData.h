#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMapData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FFortMapData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> BuildingWorld;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BuildingLevelTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionWeight;
    
    FORTNITEGAME_API FFortMapData();
};

