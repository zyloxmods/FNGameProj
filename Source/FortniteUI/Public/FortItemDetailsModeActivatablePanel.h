#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailsActivatablePanel.h"
#include "FortItemDetailsModeActivatablePanel.generated.h"

class UCommonWidgetSwitcher;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemDetailsModeActivatablePanel : public UFortItemDetailsActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* DetailPanelWidgetSwitcher;
    
    UFortItemDetailsModeActivatablePanel();
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex);
    
};

