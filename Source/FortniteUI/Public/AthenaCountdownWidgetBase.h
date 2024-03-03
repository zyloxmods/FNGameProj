#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaCountdownWidgetBase.generated.h"

class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaCountdownWidgetBase : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
public:
    UAthenaCountdownWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisplayWarningMessage(const FText& FirstLineText, const FText& SecondLineText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownUpdate(int32 TimeRemaining, const FText& CountdownUpdateText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownStarted(int32 TimeRemaining, const FText& CountdownIntroText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownStopped();
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownFinished();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

