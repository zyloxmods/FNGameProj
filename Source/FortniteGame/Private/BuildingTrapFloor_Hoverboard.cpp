#include "BuildingTrapFloor_Hoverboard.h"
#include "Components/ArrowComponent.h"

ABuildingTrapFloor_Hoverboard::ABuildingTrapFloor_Hoverboard() {
    this->DirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Direction Arrow"));
    this->PushAmount = 3200.00f;
}

