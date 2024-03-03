#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "CommonActivatablePanel.h"
#include "FortSplashScreenWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSplashScreenWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UFortSplashScreenWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputMethodChanged(ECommonInputType InputType);
    
};

