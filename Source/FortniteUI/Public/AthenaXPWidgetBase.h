#pragma once
#include "CoreMinimal.h"
#include "XPUIEvent.h"
#include "FortHUDElementWidget.h"
#include "AthenaXPWidgetBase.generated.h"

class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaXPWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaXPWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateXPSource(const FText& NewSourceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateXPAmount(int32 NewAmount, USoundCue* Cue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRestXP(int32 RestXpRemaining);
    
    UFUNCTION(BlueprintCallable)
    void OnXPEvent(const FXPUIEvent& XPEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetAnimationDone();
    
    UFUNCTION(BlueprintCallable)
    void OnProfileUpdated();
    
    UFUNCTION(BlueprintCallable)
    void ForwardEvent();
    
};

