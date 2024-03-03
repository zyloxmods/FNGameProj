#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "FortOptionsMenu.generated.h"

class UCommonWidgetSwitcher;
class UFortTabListWidgetBase;
class USizeBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsMenu : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ApplyInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ApplyAndTestInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TestInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ToggleModeInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ResetToDefaultInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InputsResetToDefaulInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackDataInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox_HeadingLeto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* TabList_Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* SettingTabSwitcher;
    
public:
    UFortOptionsMenu();
private:
    UFUNCTION(BlueprintCallable)
    bool ShowVideoOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowTouchAndMotionOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowNewControllerSenseOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowInputOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowControllerOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowAccountOptions();
    
    UFUNCTION(BlueprintCallable)
    void SetApplyOrTest(bool bShowApply);
    
    UFUNCTION(BlueprintCallable)
    void ResetClientHUDSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionHandlerStates(bool bIsBackButtonDisabled);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestTab(FName TabId, const FString& SettingDevName);
    
    UFUNCTION(BlueprintCallable)
    void OpenSettingsIfSaved();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVideoCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoAccept();
    
    UFUNCTION(BlueprintCallable)
    void OnToggleModeInternal(bool& PassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnToggleMode();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTest(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnRestoreToInitial();
    
    UFUNCTION(BlueprintCallable)
    void OnResetToDefaults(int32 PresetToSet);
    
    UFUNCTION(BlueprintCallable)
    void OnResetToDefaultInternal(bool& PassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetToDefault();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputsResetToDefault();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInputResetToDefaultInternal(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    void OnBackInternal(bool& PassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBack();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnApplySettingsInternal(bool& PassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplySettings();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnApplyAndTest(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable)
    bool NeedsVideoChangeConfirmation();
    
    UFUNCTION(BlueprintCallable)
    bool NeedsLanguageChangeConfirmation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSettingsSaveComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSettingsErrorMessageClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleBenchmarkComplete();
    
private:
    UFUNCTION(BlueprintCallable)
    void ExitIfTabSaved();
    
    UFUNCTION(BlueprintCallable)
    void ClearCachedEula();
    
    UFUNCTION(BlueprintCallable)
    void ApplySettingss();
    
};

