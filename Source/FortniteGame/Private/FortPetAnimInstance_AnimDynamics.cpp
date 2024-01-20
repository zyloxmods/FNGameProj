#include "FortPetAnimInstance_AnimDynamics.h"

UFortPetAnimInstance_AnimDynamics::UFortPetAnimInstance_AnimDynamics() {
    this->PawnSpeedForAnimDynamics = 0.00f;
    this->PawnSpeedForPlayingEmote = 0.00f;
    this->PawnSpeedForDBNO = 0.00f;
    this->bIsJoggingOrSprinting = false;
    this->bPetWantsAnimDynamics = false;
    this->bIsPlayingEmote = false;
    this->bIsDBNO = false;
    this->bIsPlayingEmoteOrDBNO = false;
}

