#include "HUDMessageData.h"

FHUDMessageData::FHUDMessageData() {
    Placement = EHUDMessagePlacement::None;
    PlayerState = NULL;
    MessageTargets = EHUDMessageMessageTargets::All;
    TextTransformPolicy = ETextTransformPolicy::None;
}

