#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortOptionsMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortOptionsMenu : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortOptionsMenu();
private:
    UFUNCTION(BlueprintCallable)
    bool ShowVideoOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowInputOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowControllerOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowBrightnessOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowAccountOptions();
    
    UFUNCTION(BlueprintCallable)
    bool ShowAccessibilityOptions();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameOptionsSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetClientHUDSettings();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoAccept();
    
    UFUNCTION(BlueprintCallable)
    void OnResetToDefaults(int32 PresetToSet);
    
    UFUNCTION(BlueprintCallable)
    void OnReset();
    
    UFUNCTION(BlueprintCallable)
    void OnApply();
    
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
    void ClearCachedEula();
    
};

