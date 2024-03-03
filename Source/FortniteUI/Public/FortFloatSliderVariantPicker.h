#pragma once
#include "CoreMinimal.h"
#include "FortVariantEditorWidgetBase.h"
#include "FortFloatSliderVariantPicker.generated.h"

class UAnalogSlider;
class UCommonTextBlock;
class UFortCosmeticFloatSliderVariant;

UCLASS(Blueprintable, EditInlineNew)
class UFortFloatSliderVariantPicker : public UFortVariantEditorWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CommitDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCosmeticFloatSliderVariant* FloatVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider_Value;
    
public:
    UFortFloatSliderVariantPicker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateValue(float NormalizedValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderValueChanged(float Value);
    
};

