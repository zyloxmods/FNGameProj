#include "FortHuskAnimInstance.h"

void UFortHuskAnimInstance::SetHuskAnimType(EFortHuskAnimType NewHuskAnimType) {
}

EFortHuskAnimType UFortHuskAnimInstance::GetHuskAnimType() const {
    return EFortHuskAnimType::Basic;
}

UFortHuskAnimInstance::UFortHuskAnimInstance() {
    HuskAnimType = EFortHuskAnimType::Basic;
    FallAsleepAnimDuration = 1;
    AltFallAsleepAnimDuration = 1;
    WakeUpAnimDuration = 1;
    FallAsleepToSleepingCrossfade = 1;
    WakeUpToIdleCrossfade = 1;
    DefaultToDwarfScaleRatio = 1;
    LookAtAlpha = 1;
    LookAtInterpSpeed = 1;
    AdjustedLowerBodyWeight = 1;
    AdjustedLowerBodyInterpSpeed = 1;
    RunPlayRate = 1;
    ZapperOverrideWeight = 1;
    RunStartPosition = 1;
    AuthoredJogSpeed = 1;
    MovementStyleIsWalking = 0;
    bForceFullBodyMontage = false;
    bIsDwarf = false;
    bIsZapper = false;
    StateTransition_IdleToMove = false;
    StateTransition_IdleToFallAsleep = false;
    StateTransition_IdleToStunned = false;
    StateTransition_IdleToKnockedbackDown = false;
    StateTransition_IdleToKnockedbackUp = false;
    StateTransition_MoveToIdle = false;
    StateTransition_FallAsleepToSleeping = false;
    StateTransition_SleepingToWakeUp = false;
    StateTransition_WakeUpToIdle = false;
    StateTransition_StunnedToIdle = false;
    StateTransition_KnockedbackDownToIdle = false;
    StateTransition_KnockedbackUpToKnockedbackDown = false;
}

