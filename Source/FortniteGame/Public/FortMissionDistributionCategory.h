#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionDistributionCategory.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionDistributionCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery CategoryTagQuery;
    
    FORTNITEGAME_API FFortMissionDistributionCategory();
};

