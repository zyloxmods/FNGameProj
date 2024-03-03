#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaCommonPrioritizedWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaCommonPrioritizedWidget : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoManagePriorityByVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
public:
    UAthenaCommonPrioritizedWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStompedByOtherWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeInactive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBecomeActive();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

