#include "HUDMessageData.h"

FHUDMessageData::FHUDMessageData() {
    this->Placement = EHUDMessagePlacement::None;
    this->PlayerState = NULL;
    this->MessageTargets = EHUDMessageMessageTargets::All;
    this->TextTransformPolicy = ETextTransformPolicy::None;
}

