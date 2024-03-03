#include "FortGameplayTagBuildingActor.h"
#include "Components/BoxComponent.h"

AFortGameplayTagBuildingActor::AFortGameplayTagBuildingActor() {
    this->XGridCells = 0;
    this->YGridCells = 0;
    this->ZGridCells = 0;
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
}

