#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EAthenaGamePhase.h"
#include "FortPrioritizedWidget.h"
#include "HardcoreModifierFlyover.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UHardcoreModifierFlyover : public UCommonUserWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
    UHardcoreModifierFlyover();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpdateActiveModifiers(const FText& ActiveModifierText);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase GamePhase);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

