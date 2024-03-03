#pragma once
#include "CoreMinimal.h"
#include "EAthenaStormCapState.h"
#include "EStormSurgeThresholdType.h"
#include "FortHUDElementWidget.h"
#include "AthenaStormSurgeWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaStormSurgeWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaStormSurgeWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateThresholdDisplay(const FText& ThresholdText, EStormSurgeThresholdType ThresholdType);
    
    UFUNCTION(BlueprintCallable)
    void OnStormCapStateChanged(EAthenaStormCapState StormCapState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopDisplaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDisplaying(const FText& TitleText);
    
};

