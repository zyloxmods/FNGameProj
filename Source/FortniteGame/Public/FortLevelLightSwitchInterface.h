#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortLevelLightSwitchInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortLevelLightSwitchInterface : public UInterface {
    GENERATED_BODY()
};

class IFortLevelLightSwitchInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableLevelSetLighting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableLevelSetLighting();
    
};

