#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
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

