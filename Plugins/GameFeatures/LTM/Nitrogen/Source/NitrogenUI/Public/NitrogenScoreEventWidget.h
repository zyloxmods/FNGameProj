#pragma once
#include "CoreMinimal.h"
#include "ENitrogenScoreReason.h"
#include "NitrogenWidgetBase.h"
#include "OnNitrogenScoreEventDisplayedDelegate.h"
#include "OnNitrogenScoreEventHiddenDelegate.h"
#include "NitrogenScoreEventWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNitrogenScoreEventWidget : public UNitrogenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNitrogenScoreEventDisplayed OnNitrogenScoreEventDisplayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNitrogenScoreEventHidden OnNitrogenScoreEventHidden;
    
    UNitrogenScoreEventWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayScoreEvent(ENitrogenScoreReason ScoreReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayLeadChangedEvent(bool bInLead);
    
};

