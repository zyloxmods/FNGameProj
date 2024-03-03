#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESettingType.h"
#include "SettingValueChangedDelegate.h"
#include "FortOptionsMenuSetting.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsMenuSetting : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingValueChanged SettingValueChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESettingType SettingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NameText;
    
    UFortOptionsMenuSetting();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSetting(UCommonTextBlock* TooltipTextBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetControlsEnabled(bool bEnabled, const FText& DisabledReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CenterOnWidget();
    
};

