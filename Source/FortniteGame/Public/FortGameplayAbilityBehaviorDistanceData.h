#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbilityBehaviorDistanceData.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayAbilityBehaviorDistanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DistanceDataTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FORTNITEGAME_API FFortGameplayAbilityBehaviorDistanceData();
};

