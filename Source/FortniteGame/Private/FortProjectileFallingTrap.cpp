#include "FortProjectileFallingTrap.h"
#include "Components/StaticMeshComponent.h"

AFortProjectileFallingTrap::AFortProjectileFallingTrap() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
}

