#pragma once
#include "CoreMinimal.h"
#include "FortSettingsListEntry_Setting.h"
#include "FortSettingsListEntrySetting_Scalar.generated.h"

class UAnalogSlider;
class UCommonTextBlock;
class UFortSettingValueScalar;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSettingsListEntrySetting_Scalar : public UFortSettingsListEntry_Setting {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSettingValueScalar* ScalarSetting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider_SettingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingValue;
    
public:
    UFortSettingsListEntrySetting_Scalar();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefaultValueChanged(float DefaultValue);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderValueChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderCaptureEnded();
    
};

