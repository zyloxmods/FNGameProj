#include "FortAnimNotifyState_TimedNiagaraEffectWithBackup.h"

UFortAnimNotifyState_TimedNiagaraEffectWithBackup::UFortAnimNotifyState_TimedNiagaraEffectWithBackup() {
    this->Type = EFXType::GenericAnimNotify;
    this->BackupTemplate = NULL;
    this->CosmeticDefContainingVariants = NULL;
}

