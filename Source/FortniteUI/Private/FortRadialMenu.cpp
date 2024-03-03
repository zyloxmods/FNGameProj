#include "FortRadialMenu.h"

UFortRadialMenu::UFortRadialMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->EntryWidgetClass = NULL;
    this->JoystickDeadZone = 1;
    this->MouseDeadZoneRadiusPercentage = 1;
    this->EntryBox_ContextRadial = NULL;
}

