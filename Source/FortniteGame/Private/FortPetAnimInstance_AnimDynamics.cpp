#include "FortPetAnimInstance_AnimDynamics.h"













UFortPetAnimInstance_AnimDynamics::UFortPetAnimInstance_AnimDynamics() {
    this->PawnSpeedForAnimDynamics = 1;
    this->PawnSpeedForPlayingEmote = 1;
    this->PawnSpeedForDBNO = 1;
    this->bIsJoggingOrSprinting = false;
    this->bPetWantsAnimDynamics = false;
    this->bIsPlayingEmote = false;
    this->bIsDBNO = false;
    this->bIsPlayingEmoteOrDBNO = false;
    this->bIsSkydiving = false;
    this->bIsParachuteOpened = false;
    this->bIsSkydiveDiveMode = false;
    this->bIsSkydiveFloating = false;
    this->bIsCrouching = false;
    this->bIsTargeting = false;
}

