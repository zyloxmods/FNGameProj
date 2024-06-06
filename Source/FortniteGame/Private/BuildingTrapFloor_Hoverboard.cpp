#include "BuildingTrapFloor_Hoverboard.h"
#include "Components/ArrowComponent.h"

ABuildingTrapFloor_Hoverboard::ABuildingTrapFloor_Hoverboard() {
    DirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Direction Arrow"));
    PushAmount = 1;
}

