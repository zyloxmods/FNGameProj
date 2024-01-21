#include "FortCreativePublishOptions.h"

void UFortCreativePublishOptions::UpdateTimeSinceLastBackup(FDateTime LastBackup) {
}

void UFortCreativePublishOptions::UpdatePermissions(EFortCreativePlotPermission Permissions) {
}

void UFortCreativePublishOptions::RestoreMyIslandFromBackup() {
}

void UFortCreativePublishOptions::ResetMyCurrentCreativePlot() {
}





void UFortCreativePublishOptions::CheckpointSaveStateChanged(EBackupSaveState SaveState) {
}

void UFortCreativePublishOptions::CheckpointRestoreStateChanged(EBackupSaveState SaveState) {
}

void UFortCreativePublishOptions::BackupMyIsland() {
}

UFortCreativePublishOptions::UFortCreativePublishOptions() {
    this->CurrentPermissionsEnum = EFortCreativePlotPermission::Private;
    this->IslandPublishBox = NULL;
    this->IslandRestoreBox = NULL;
    this->CheckpointBox = NULL;
    this->SaveComponent = NULL;
    this->Text_RestoreTime = NULL;
    this->Text_OnCooldown = NULL;
    this->Button_Restore = NULL;
}

