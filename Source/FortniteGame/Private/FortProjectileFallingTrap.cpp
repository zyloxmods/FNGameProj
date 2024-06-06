#include "FortProjectileFallingTrap.h"
#include "Components/StaticMeshComponent.h"

AFortProjectileFallingTrap::AFortProjectileFallingTrap() {
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
}

