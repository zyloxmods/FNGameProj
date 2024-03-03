#pragma once
#include "CoreMinimal.h"
#include "AthenaCoupledWidgetInterface.h"
#include "GameplayTagContainer.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaDiscoverabilityBase.generated.h"

class UFortControllerComponent_MapDiscoverability;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaDiscoverabilityBase : public UFortHUDElementWidget, public IAthenaCoupledWidgetInterface, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_MapDiscoverability* AssociatedComponent;
    
public:
    UAthenaDiscoverabilityBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompedByOtherWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeActive();
    
    UFUNCTION(BlueprintCallable)
    void CommonArrivalEvent(const FGameplayTag& NewTag);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

