#pragma once
#include "CoreMinimal.h"
#include "EAthenaStormCapState.h"
#include "FortHUDElementWidget.h"
#include "FortPrioritizedWidget.h"
#include "FortPrioritizedWidgetData.h"
#include "AthenaStormSurgeWarningBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UAthenaStormSurgeWarningBase : public UFortHUDElementWidget, public IFortPrioritizedWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPrioritizedWidgetData PrioritizationData;
    
public:
    UAthenaStormSurgeWarningBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnStormCapStateChanged(EAthenaStormCapState StormCapState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopDisplaying();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDisplaying(const FText& TitleText, const FText& SubTitleText, bool bDisplaySubtitle, bool bPlayDamageActiveSound);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void WidgetIsFinished() override PURE_VIRTUAL(WidgetIsFinished,);
    
    UFUNCTION(BlueprintCallable)
    void SetHasActiveContent(bool bNewActive) override PURE_VIRTUAL(SetHasActiveContent,);
    
    UFUNCTION(BlueprintCallable)
    void RequestActivation() override PURE_VIRTUAL(RequestActivation,);
    
};

