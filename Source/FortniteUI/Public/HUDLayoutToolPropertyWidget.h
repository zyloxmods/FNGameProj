#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ELayoutPropertyType.h"
#include "HUDLayoutToolPropertyWidget.generated.h"

class UAnalogSlider;
class UCommonTextBlock;
class UHUDLayoutToolPlacementWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHUDLayoutToolPropertyWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* MySlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PropertyValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropertyIndex;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHUDLayoutToolPlacementWidget> CurrentWidget;
    
public:
    UHUDLayoutToolPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPropertyType(ELayoutPropertyType NewPropertyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBoolValue(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshProperties();
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetSelected(UHUDLayoutToolPlacementWidget* NewlySelectedWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnNewSliderValue(float NormalizedValue);
    
    UFUNCTION(BlueprintCallable)
    void OnNewRotatorValue(int32 NormalizedValue);
    
    UFUNCTION(BlueprintCallable)
    void OnNewBoolValue(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetRotatorLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValueAsInt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentValueAsBool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentValue() const;
    
};

