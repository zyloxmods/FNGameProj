#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "HUDLayoutToolV2_GridSnap.generated.h"

class UAnalogSlider;
class UCommonTextBlock;
class UFortSimpleMaterialProgressBar;
class UHUDLayoutToolV2_Button;
class UPaperSprite;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_GridSnap : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGridSnapEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* CheckMarkSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SettingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAnalogSlider* Slider_SettingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDLayoutToolV2_Button* Button_ToggleEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSimpleMaterialProgressBar* ProgressBar_ColoredBackground;
    
public:
    UHUDLayoutToolV2_GridSnap();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSliderValueChanged(float InValue);
    
};

