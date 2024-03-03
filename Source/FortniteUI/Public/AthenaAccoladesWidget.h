#pragma once
#include "CoreMinimal.h"
#include "XPUIEvent.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaAccoladesWidget.generated.h"

class UFortAccoladeItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaAccoladesWidget : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FXPUIEvent> XPEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FXPUIEvent CurrentEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
public:
    UAthenaAccoladesWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenWidget(const UFortAccoladeItemDefinition* AccoladeDef, const int32& XpValue, const FText& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    void OnXPEvent(const FXPUIEvent& XPEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompedByOtherWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMoreXPEvents() const;
    
    UFUNCTION(BlueprintCallable)
    void ForwardEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseWidget();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

