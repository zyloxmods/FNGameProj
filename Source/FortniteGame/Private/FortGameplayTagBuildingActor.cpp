#include "FortGameplayTagBuildingActor.h"
#include "Components/BoxComponent.h"

AFortGameplayTagBuildingActor::AFortGameplayTagBuildingActor() {
    this->XGridCells = 1;
    this->YGridCells = 1;
    this->ZGridCells = 1;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
}

