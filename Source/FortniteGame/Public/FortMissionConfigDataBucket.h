#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionConfigDataBucket.generated.h"

class UFortMissionConfigData;

USTRUCT(BlueprintType)
struct FFortMissionConfigDataBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortMissionConfigData> ConfigDataClass;
    
    FORTNITEGAME_API FFortMissionConfigDataBucket();
};

