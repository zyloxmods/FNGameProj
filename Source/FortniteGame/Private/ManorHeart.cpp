#include "ManorHeart.h"

void AManorHeart::TravelToNewWorld(const FString& NewTheaterId) {
}

AManorHeart::AManorHeart() {
    this->KeepIconActor = NULL;
    this->ContainerNamesToDestroy.AddDefaulted(2);
    this->InfiniteStaminaEffect = NULL;
}

