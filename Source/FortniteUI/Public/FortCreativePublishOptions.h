#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBackupSaveState.h"
#include "EFortCreativePlotPermission.h"
#include "FortCreativeWhitelistUserEntry.h"
#include "FortActivatablePanel.h"
#include "FortCreativePublishOptions.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UFortLevelSaveComponent;
class UHorizontalBox;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativePublishOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativePlotPermission CurrentPermissionsEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeWhitelistUserEntry> WhitelistedUsers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* IslandRestoreBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* CheckpointBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_IslandPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_IslandPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HorizontalBox_HowToPublish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortLevelSaveComponent* SaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RestoreTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_OnCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Backup;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Restore;
    
    UFortCreativePublishOptions();
    UFUNCTION(BlueprintCallable)
    void UpdateTimeSinceLastBackup(FDateTime LastBackup);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePermissions(EFortCreativePlotPermission Permissions);
    
    UFUNCTION(BlueprintCallable)
    void RestoreMyIslandFromBackup();
    
    UFUNCTION(BlueprintCallable)
    void ResetMyCurrentCreativePlot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveStateChanged(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestoreStateChanged(bool bReady);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRestoreMyIslandFromBackup(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackupMyIsland(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void InitializeData();
    
    UFUNCTION(BlueprintCallable)
    void CheckpointSaveStateChanged(EBackupSaveState SaveState);
    
    UFUNCTION(BlueprintCallable)
    void CheckpointRestoreStateChanged(EBackupSaveState SaveState);
    
    UFUNCTION(BlueprintCallable)
    void BackupMyIsland();
    
};

