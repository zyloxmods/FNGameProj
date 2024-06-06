#include "FortPetAnimInstance_AnimDynamics.h"













UFortPetAnimInstance_AnimDynamics::UFortPetAnimInstance_AnimDynamics() {
    PawnSpeedForAnimDynamics = 1;
    PawnSpeedForPlayingEmote = 1;
    PawnSpeedForDBNO = 1;
    bIsJoggingOrSprinting = false;
    bPetWantsAnimDynamics = false;
    bIsPlayingEmote = false;
    bIsDBNO = false;
    bIsPlayingEmoteOrDBNO = false;
    bIsSkydiving = false;
    bIsParachuteOpened = false;
    bIsSkydiveDiveMode = false;
    bIsSkydiveFloating = false;
    bIsCrouching = false;
    bIsTargeting = false;
}

