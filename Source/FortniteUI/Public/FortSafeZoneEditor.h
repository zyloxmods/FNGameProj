#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortSafeZoneEditor.generated.h"

class UCommonButton;
class UCommonRichTextBlock;
class UFortSetting;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSafeZoneEditor : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_SafeZoneMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_SwitchHandheldWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Done;
    
public:
    UFortSafeZoneEditor();
    UFUNCTION(BlueprintCallable)
    void SetChildSettingReference(UFortSetting* SettingReference);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDoneClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleBackClicked();
    
};

