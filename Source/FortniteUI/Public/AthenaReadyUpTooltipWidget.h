#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaReadyUpTooltipWidget.generated.h"

class UAthenaReadyUpTooltipTickWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReadyUpTooltipWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaReadyUpTooltipTickWidget*> PartyWidgets;
    
public:
    UAthenaReadyUpTooltipWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePartyWidgetReadinessChanged(bool bIsReadied);
    
};

