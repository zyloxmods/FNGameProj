#pragma once
#include "CoreMinimal.h"
#include "CommonWidgetSwitcher.h"
#include "CommonWidgetStack.generated.h"

class UWidget;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonWidgetStack : public UCommonWidgetSwitcher {
    GENERATED_BODY()
public:
    UCommonWidgetStack();
    UFUNCTION(BlueprintCallable)
    void PushWidget(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    UWidget* PopWidget();
    
};

