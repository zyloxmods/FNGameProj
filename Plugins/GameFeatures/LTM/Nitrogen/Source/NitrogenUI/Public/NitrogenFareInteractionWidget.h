#pragma once
#include "CoreMinimal.h"
#include "NitrogenFareInteractionData.h"
#include "NitrogenWidgetBase.h"
#include "NitrogenFareInteractionWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNitrogenFareInteractionWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
    UNitrogenFareInteractionWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimerDisplay(bool bCanceled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndInteraction();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginInteraction(const FNitrogenFareInteractionData& FareInteractionData);
    
};

