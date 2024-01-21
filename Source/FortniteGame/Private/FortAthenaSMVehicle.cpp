#include "FortAthenaSMVehicle.h"
#include "Components/StaticMeshComponent.h"

AFortAthenaSMVehicle::AFortAthenaSMVehicle() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}

