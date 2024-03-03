#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMissionTaggedRewards.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FFortMissionTaggedRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortWorldItemDefinition>> WorldItemDefinitions;
    
    FORTNITEGAME_API FFortMissionTaggedRewards();
};

