#include "FortAthenaSimpleCar.h"
#include "Components/SkeletalMeshComponent.h"
#include "FortAthenaSimpleCarMovementComponent.h"

AFortAthenaSimpleCar::AFortAthenaSimpleCar() {
    WheeledVehicleMovementComponent = CreateDefaultSubobject<UFortAthenaSimpleCarMovementComponent>(TEXT("FortAthenaWheeledVehicleMovementComponent0"));
    MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
}

