#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManager_LivingWorldManager.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager {
    GENERATED_BODY()
public:
    UFortCheatManager_LivingWorldManager();
    UFUNCTION(BlueprintCallable, Exec)
    void LivingWorldManagerSpawn(const FString& EventDataName);
    
};

