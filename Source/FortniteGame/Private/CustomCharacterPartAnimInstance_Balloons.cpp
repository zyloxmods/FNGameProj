#include "CustomCharacterPartAnimInstance_Balloons.h"

UCustomCharacterPartAnimInstance_Balloons::UCustomCharacterPartAnimInstance_Balloons() {
    PlayerPawn = NULL;
    Character = NULL;
    BGABalloon = NULL;
    PawnSpeed = 1;
    bIsMovingBackward = false;
    TrailVehicleAlpha = 1;
    BalloonLocationAlpha = 1;
    IsFloatingAlpha = 1;
    SpringAlpha = 1;
    PawnZVelCheck = 1;
    AimAlpha = 1;
    ForwardLocationAlphas.AddDefaulted(4);
    BackwardLocationAlphas.AddDefaulted(4);
    ForwardRotators.AddDefaulted(4);
    BackwardRotators.AddDefaulted(4);
    SpringMultiplier = 1;
}

