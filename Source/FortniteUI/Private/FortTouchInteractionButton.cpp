#include "FortTouchInteractionButton.h"


UFortTouchInteractionButton::UFortTouchInteractionButton() {
    this->bInteractionFocused = false;
    this->Anim_RadialProgress = NULL;
    this->DetailsTable = NULL;
    this->DefaultIconScale = 1;
    this->PickupIconScale = 1;
    this->Image_Icon = NULL;
    this->TrackedActor = NULL;
}

