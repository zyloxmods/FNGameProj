#include "AthenaSpatialCustomizationRoom.h"



UAthenaSpatialCustomizationRoom::UAthenaSpatialCustomizationRoom() {
    this->Categories = NULL;
    this->Selection = NULL;
    this->Button_About = NULL;
    this->CustomizationRoomData = NULL;
    this->EventGameStateComponent = NULL;
    this->RoomState = ESpatialCustomizationRoomState::None;
}

