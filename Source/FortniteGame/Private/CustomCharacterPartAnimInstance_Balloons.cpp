#include "CustomCharacterPartAnimInstance_Balloons.h"

UCustomCharacterPartAnimInstance_Balloons::UCustomCharacterPartAnimInstance_Balloons() {
    this->PlayerPawn = NULL;
    this->Character = NULL;
    this->BGABalloon = NULL;
    this->PawnSpeed = 0.00f;
    this->bIsMovingBackward = false;
    this->TrailVehicleAlpha = 0.00f;
    this->BalloonLocationAlpha = 1.00f;
    this->IsFloatingAlpha = 0.00f;
    this->SpringAlpha = 0.00f;
    this->PawnZVelCheck = 0.00f;
    this->AimAlpha = 1.00f;
    this->ForwardLocationAlphas.AddDefaulted(4);
    this->BackwardLocationAlphas.AddDefaulted(4);
    this->ForwardRotators.AddDefaulted(4);
    this->BackwardRotators.AddDefaulted(4);
    this->SpringMultiplier = 0.67f;
}

