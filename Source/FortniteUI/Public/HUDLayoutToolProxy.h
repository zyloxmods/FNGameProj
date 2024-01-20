#pragma once
#include "CoreMinimal.h"
#include "ELayoutPropertyType.h"
#include "BacchusResizableHUDElement.h"
#include "HUDLayoutToolProxy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolProxy : public UBacchusResizableHUDElement {
    GENERATED_BODY()
public:
    UHUDLayoutToolProxy();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_SetPropertyValue(int32 PropertyIndex, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText BP_GetWidgetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BP_GetPropertyValue(int32 PropertyIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELayoutPropertyType BP_GetPropertyType(int32 PropertyIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_GetPropertyRange(int32 PropertyIndex, float& OutMin, float& OutMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText BP_GetPropertyName(int32 PropertyIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 BP_GetNumOfProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FText> BP_GetMultiOptionLabels(int32 PropertyIndex) const;
    
};

