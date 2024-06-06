#include "BuildingTrapFloor_Hoverboard_Curve.h"
#include "Components/SceneComponent.h"

ABuildingTrapFloor_Hoverboard_Curve::ABuildingTrapFloor_Hoverboard_Curve() {
    Target = CreateDefaultSubobject<USceneComponent>(TEXT("Target"));
    TriggeredEffect = NULL;
}

