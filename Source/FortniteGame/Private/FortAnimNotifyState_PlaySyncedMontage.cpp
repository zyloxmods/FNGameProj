#include "FortAnimNotifyState_PlaySyncedMontage.h"

UFortAnimNotifyState_PlaySyncedMontage::UFortAnimNotifyState_PlaySyncedMontage() {
    this->SyncedMontage = NULL;
    this->MontageTarget = EMontageSyncTargetType::Pet;
    this->PartType = EFortCustomPartType::Head;
    this->MontageStopBlendTime = 1;
}

