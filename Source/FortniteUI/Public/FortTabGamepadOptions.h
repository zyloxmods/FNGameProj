#pragma once
#include "CoreMinimal.h"
#include "FortOptionsTab.h"
#include "Templates/SubclassOf.h"
#include "FortTabGamepadOptions.generated.h"

class UCommonButton;
class UCommonListView;
class UCommonTextBlock;
class UObject;
class UUserWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTabGamepadOptions : public UFortOptionsTab {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* InputCommonListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TooltipDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InputCategoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_AdvancedSettingsToggle;
    
public:
    UFortTabGamepadOptions();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleAdvancedSettingsDisplay(bool bShowAdvancedSettings);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetSettingsToDefault();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdvancedSettingsEnabled();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetListWidget(UObject* Item);
    
};

