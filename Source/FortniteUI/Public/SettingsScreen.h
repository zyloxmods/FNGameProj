#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "SettingsScreen.generated.h"

class UFortSettingRegistry;
class UFortSettingsPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USettingsScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSettingsPanel* Settings_Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSettingRegistry* Registry;
    
public:
    USettingsScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSavingProgress();
    
    UFUNCTION(BlueprintCallable)
    void SaveSettings();
    
    UFUNCTION(BlueprintCallable)
    void ResetSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSettingsDirtyStateChanged(bool bSettingsDirty);
    
    UFUNCTION(BlueprintCallable)
    void NavigateToSettings(TArray<FName> SettingsCollectionNames);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideSavingProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveSettingsBeenChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSettings();
    
    UFUNCTION(BlueprintCallable)
    bool AttemptToPopNavigation();
    
};

