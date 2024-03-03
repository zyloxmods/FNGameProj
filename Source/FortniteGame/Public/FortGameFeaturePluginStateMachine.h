#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFeaturePluginStateMachineProperties.h"
#include "FortGameFeaturePluginStateMachine.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameFeaturePluginStateMachine : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameFeaturePluginStateMachineProperties StateProperties;
    
public:
    UFortGameFeaturePluginStateMachine();
};

