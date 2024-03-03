#include "BuildingTrapCeiling_Falling.h"
#include "Components/StaticMeshComponent.h"


ABuildingTrapCeiling_Falling::ABuildingTrapCeiling_Falling() {
    this->VisibleMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visible Mesh Component"));
}

