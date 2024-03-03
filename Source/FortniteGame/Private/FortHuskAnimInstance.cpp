#include "FortHuskAnimInstance.h"

void UFortHuskAnimInstance::SetHuskAnimType(EFortHuskAnimType NewHuskAnimType) {
}

EFortHuskAnimType UFortHuskAnimInstance::GetHuskAnimType() const {
    return EFortHuskAnimType::Basic;
}

UFortHuskAnimInstance::UFortHuskAnimInstance() {
    this->HuskAnimType = EFortHuskAnimType::Basic;
    this->FallAsleepAnimDuration = 1;
    this->AltFallAsleepAnimDuration = 1;
    this->WakeUpAnimDuration = 1;
    this->FallAsleepToSleepingCrossfade = 1;
    this->WakeUpToIdleCrossfade = 1;
    this->DefaultToDwarfScaleRatio = 1;
    this->LookAtAlpha = 1;
    this->LookAtInterpSpeed = 1;
    this->AdjustedLowerBodyWeight = 1;
    this->AdjustedLowerBodyInterpSpeed = 1;
    this->RunPlayRate = 1;
    this->ZapperOverrideWeight = 1;
    this->RunStartPosition = 1;
    this->AuthoredJogSpeed = 1;
    this->MovementStyleIsWalking = 0;
    this->bForceFullBodyMontage = false;
    this->bIsDwarf = false;
    this->bIsZapper = false;
    this->StateTransition_IdleToMove = false;
    this->StateTransition_IdleToFallAsleep = false;
    this->StateTransition_IdleToStunned = false;
    this->StateTransition_IdleToKnockedbackDown = false;
    this->StateTransition_IdleToKnockedbackUp = false;
    this->StateTransition_MoveToIdle = false;
    this->StateTransition_FallAsleepToSleeping = false;
    this->StateTransition_SleepingToWakeUp = false;
    this->StateTransition_WakeUpToIdle = false;
    this->StateTransition_StunnedToIdle = false;
    this->StateTransition_KnockedbackDownToIdle = false;
    this->StateTransition_KnockedbackUpToKnockedbackDown = false;
}

