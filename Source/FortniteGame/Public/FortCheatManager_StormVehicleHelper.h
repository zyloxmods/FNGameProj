#pragma once
#include "CoreMinimal.h"
#include "FortCheatManager_Coupled.h"
#include "FortCheatManager_StormVehicleHelper.generated.h"

UCLASS(Blueprintable)
class UFortCheatManager_StormVehicleHelper : public UFortCheatManager_Coupled {
    GENERATED_BODY()
public:
    UFortCheatManager_StormVehicleHelper();
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetStormVehicleHelperEnabled(bool bEnabledIn);
    
};

