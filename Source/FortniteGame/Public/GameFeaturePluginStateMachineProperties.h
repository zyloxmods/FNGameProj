#pragma once
#include "CoreMinimal.h"
#include "GameFeaturePluginStateMachineProperties.generated.h"

class UFortGameFeatureData;

USTRUCT(BlueprintType)
struct FGameFeaturePluginStateMachineProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGameFeatureData* GameFeatureData;
    
    FORTNITEGAME_API FGameFeaturePluginStateMachineProperties();
};

