#pragma once
#include "CoreMinimal.h"
#include "EAthenaPlayerActionAlert.h"
#include "FortHUDElementWidget.h"
#include "AthenaHUDPlayerActionAlertBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaHUDPlayerActionAlertBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaHUDPlayerActionAlertBase();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestNextAlert();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowAlert(EAthenaPlayerActionAlert Alert, const FText& DetailText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAlertsCleared();
    
};

