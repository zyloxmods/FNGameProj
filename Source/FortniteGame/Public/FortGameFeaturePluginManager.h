#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortGameFeaturePluginManager.generated.h"

class UFortGameFeaturePluginStateMachine;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class UFortGameFeaturePluginManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DisabledPlugins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BuiltInGameFeaturePluginsFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UFortGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines;
    
public:
    UFortGameFeaturePluginManager();
};

