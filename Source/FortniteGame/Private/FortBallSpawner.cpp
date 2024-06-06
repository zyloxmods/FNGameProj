#include "FortBallSpawner.h"
#include "Components/SphereComponent.h"

AFortBallSpawner::AFortBallSpawner() {
    BallToSpawn = NULL;
    SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Scene"));
}

