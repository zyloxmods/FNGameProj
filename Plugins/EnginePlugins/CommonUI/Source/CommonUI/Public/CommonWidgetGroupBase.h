#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonWidgetGroupBase.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable)
class COMMONUI_API UCommonWidgetGroupBase : public UObject {
    GENERATED_BODY()
public:
    UCommonWidgetGroupBase();
    UFUNCTION(BlueprintCallable)
    void RemoveWidget(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAll();
    
    UFUNCTION(BlueprintCallable)
    void AddWidget(UWidget* InWidget);
    
};

