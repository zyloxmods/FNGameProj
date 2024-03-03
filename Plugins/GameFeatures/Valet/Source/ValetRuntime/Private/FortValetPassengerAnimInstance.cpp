#include "FortValetPassengerAnimInstance.h"

UFortValetPassengerAnimInstance::UFortValetPassengerAnimInstance() {
    this->TurnYaw = 1;
    this->InTime = 1;
    this->OutTime = 1;
    this->NegativeTurnYaw = 1;
    this->bIsReloading = false;
    this->bIsTargeting = false;
    this->bIsFiring = false;
    this->bIsUsingConsumable = false;
    this->bIsInAction = false;
    this->bIsPassengerBackLeft = false;
    this->bIsThrowConsumable = false;
    this->bIsTargetingOrThrowingConsumable = false;
}

