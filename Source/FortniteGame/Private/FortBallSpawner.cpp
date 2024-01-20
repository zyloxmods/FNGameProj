#include "FortBallSpawner.h"
#include "Components/SphereComponent.h"

AFortBallSpawner::AFortBallSpawner() {
    this->BallToSpawn = NULL;
    this->SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Scene"));
}

