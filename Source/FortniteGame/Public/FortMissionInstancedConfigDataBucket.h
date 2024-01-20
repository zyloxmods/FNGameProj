#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionInstancedConfigDataBucket.generated.h"

class UFortMissionConfigData;

USTRUCT(BlueprintType)
struct FFortMissionInstancedConfigDataBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionConfigData* ConfigData;
    
    FORTNITEGAME_API FFortMissionInstancedConfigDataBucket();
};

