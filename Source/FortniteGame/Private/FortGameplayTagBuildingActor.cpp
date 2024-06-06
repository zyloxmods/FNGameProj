#include "FortGameplayTagBuildingActor.h"
#include "Components/BoxComponent.h"

AFortGameplayTagBuildingActor::AFortGameplayTagBuildingActor() {
    XGridCells = 0;
    YGridCells = 0;
    ZGridCells = 0;
    BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
}

