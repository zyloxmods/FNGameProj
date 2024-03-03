#pragma once
#include "CoreMinimal.h"
#include "FortCountdownSounds.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "LTMCountdownWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULTMCountdownWidgetBase : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCountdownSounds> TrackList;
    
public:
    ULTMCountdownWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownUpdate(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownActivated();
    
    UFUNCTION(BlueprintCallable)
    void HandleFinalCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownFinished();
    
    UFUNCTION(BlueprintCallable)
    FText GetTimeText(int32 TimeRemaining);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

