#include "FortAthenaExitCraftBalloon.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/StaticMeshComponent.h"

AFortAthenaExitCraftBalloon::AFortAthenaExitCraftBalloon() {
    this->RootMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp0"));
    this->PhysicsComp = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsComp0"));
}

