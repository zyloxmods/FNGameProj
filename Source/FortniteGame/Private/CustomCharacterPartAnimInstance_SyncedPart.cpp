#include "CustomCharacterPartAnimInstance_SyncedPart.h"

UCustomCharacterPartAnimInstance_SyncedPart::UCustomCharacterPartAnimInstance_SyncedPart() {
    this->SyncedSequence = NULL;
    this->bIsPlayingSyncedMontage = false;
    this->SyncedMontagePosition = 1;
}

