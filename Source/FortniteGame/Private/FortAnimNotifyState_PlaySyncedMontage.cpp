#include "FortAnimNotifyState_PlaySyncedMontage.h"

UFortAnimNotifyState_PlaySyncedMontage::UFortAnimNotifyState_PlaySyncedMontage() {
    SyncedMontage = NULL;
    MontageTarget = EMontageSyncTargetType::Pet;
    PartType = EFortCustomPartType::Head;
    MontageStopBlendTime = 1;
}

