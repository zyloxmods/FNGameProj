#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "AthenaCountdownWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaCountdownWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaCountdownWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayWarningMessage(const FText& FirstLineText, const FText& SecondLineText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownUpdate(int32 TimeRemaining, const FText& CountdownUpdateText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownStarted(int32 TimeRemaining, const FText& CountdownIntroText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(EAthenaGamePhaseStep Step);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownFinished();
    
};

