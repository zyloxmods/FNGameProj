#pragma once
#include "CoreMinimal.h"
#include "CommonVisibilitySwitcher.h"
#include "CommonWidgetStack.generated.h"

class UWidget;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonWidgetStack : public UCommonVisibilitySwitcher {
    GENERATED_BODY()
public:
    UCommonWidgetStack();
    UFUNCTION(BlueprintCallable)
    void PushWidget(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    UWidget* PopWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};

