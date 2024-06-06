#include "FortAthenaExitCraftBalloon.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Components/StaticMeshComponent.h"

AFortAthenaExitCraftBalloon::AFortAthenaExitCraftBalloon() {
    RootMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp0"));
    PhysicsComp = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("PhysicsComp0"));
}

