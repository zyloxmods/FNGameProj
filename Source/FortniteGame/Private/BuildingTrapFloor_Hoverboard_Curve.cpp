#include "BuildingTrapFloor_Hoverboard_Curve.h"
#include "Components/SceneComponent.h"

ABuildingTrapFloor_Hoverboard_Curve::ABuildingTrapFloor_Hoverboard_Curve() {
    this->Target = CreateDefaultSubobject<USceneComponent>(TEXT("Target"));
    this->TriggeredEffect = NULL;
}

