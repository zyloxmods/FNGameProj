#include "FortHuskAnimInstance.h"

void UFortHuskAnimInstance::SetHuskAnimType(EFortHuskAnimType NewHuskAnimType) {
}

EFortHuskAnimType UFortHuskAnimInstance::GetHuskAnimType() const {
    return EFortHuskAnimType::Basic;
}

void UFortHuskAnimInstance::AnimNotify_SleepingFullyBlended(const UAnimNotify* Notify) {
}

UFortHuskAnimInstance::UFortHuskAnimInstance() {
    this->HuskAnimType = EFortHuskAnimType::Basic;
    this->FallAsleepAnimDuration = 0.00f;
    this->AltFallAsleepAnimDuration = 0.00f;
    this->WakeUpAnimDuration = 0.00f;
    this->FallAsleepToSleepingCrossfade = 0.00f;
    this->WakeUpToIdleCrossfade = 0.00f;
    this->DefaultToDwarfScaleRatio = 1.15f;
    this->LookAtAlpha = 0.00f;
    this->LookAtInterpSpeed = 6.00f;
    this->AdjustedLowerBodyWeight = 0.00f;
    this->AdjustedLowerBodyInterpSpeed = 6.00f;
    this->RunPlayRate = 0.00f;
    this->ZapperOverrideWeight = 0.00f;
    this->RunStartPosition = 0.25f;
    this->AuthoredJogSpeed = 300.00f;
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

