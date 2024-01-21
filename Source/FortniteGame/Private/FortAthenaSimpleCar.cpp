#include "FortAthenaSimpleCar.h"
#include "Components/SkeletalMeshComponent.h"
#include "FortAthenaSimpleCarMovementComponent.h"

AFortAthenaSimpleCar::AFortAthenaSimpleCar() {
    this->WheeledVehicleMovementComponent = CreateDefaultSubobject<UFortAthenaSimpleCarMovementComponent>(TEXT("FortAthenaWheeledVehicleMovementComponent0"));
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
}

