#include "CustomCharacterPartAnimInstance_PetCarrier.h"

UCustomCharacterPartAnimInstance_PetCarrier::UCustomCharacterPartAnimInstance_PetCarrier() {
    this->PlayerPawn = NULL;
    this->bIsZiplining = false;
    this->bIsBallooning = false;
    this->bIsFlying = false;
    this->bIsInAirNotJumping = false;
}

