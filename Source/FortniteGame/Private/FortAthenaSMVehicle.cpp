#include "FortAthenaSMVehicle.h"
#include "Components/StaticMeshComponent.h"

AFortAthenaSMVehicle::AFortAthenaSMVehicle() {
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
}

