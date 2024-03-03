#pragma once
#include "CoreMinimal.h"
#include "FortMobileActionButtonBehavior.h"
#include "FortMobileActionButtonBehavior_BattleLabDeviceMenu.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UFortMobileActionButtonBehavior_BattleLabDeviceMenu : public UFortMobileActionButtonBehavior {
    GENERATED_BODY()
public:
    UFortMobileActionButtonBehavior_BattleLabDeviceMenu();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnBattleLabDevicesUpdated();
    
};

