#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_SafeZoneOrderOptimize.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_SafeZoneOrderOptimize : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_SafeZoneOrderOptimize();
    UFUNCTION(BlueprintCallable, Exec)
    void SafeZoneOrderOptimizeDebug(float TextScale);
    
};

