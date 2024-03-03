#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltAlertWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCobaltAlertWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 LastViewedTeam;
    
public:
    UCobaltAlertWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateAlertUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTieBreakerUI(bool bHasTieBreaker);
    
};

