#include "CustomCharacterPartAnimInstance_Balloons.h"

UCustomCharacterPartAnimInstance_Balloons::UCustomCharacterPartAnimInstance_Balloons() {
    this->PlayerPawn = NULL;
    this->Character = NULL;
    this->BGABalloon = NULL;
    this->PawnSpeed = 1;
    this->bIsMovingBackward = false;
    this->TrailVehicleAlpha = 1;
    this->BalloonLocationAlpha = 1;
    this->IsFloatingAlpha = 1;
    this->SpringAlpha = 1;
    this->PawnZVelCheck = 1;
    this->AimAlpha = 1;
    this->ForwardLocationAlphas.AddDefaulted(4);
    this->BackwardLocationAlphas.AddDefaulted(4);
    this->ForwardRotators.AddDefaulted(4);
    this->BackwardRotators.AddDefaulted(4);
    this->SpringMultiplier = 1;
}

