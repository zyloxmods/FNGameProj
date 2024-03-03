#pragma once
#include "CoreMinimal.h"
#include "FortMissionInstancedConfigDataBucket.h"
#include "FortMissionInstancedConfigData.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionInstancedConfigData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionInstancedConfigDataBucket> ConfigDataBuckets;
    
public:
    FORTNITEGAME_API FFortMissionInstancedConfigData();
};

