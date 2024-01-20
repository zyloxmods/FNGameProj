#include "HeistExitCraftIconData.h"

FHeistExitCraftIconData::FHeistExitCraftIconData() {
    this->IconIndex = 0;
    this->IconState = EHeistExitCraftIconState::None;
    this->PrevIconState = EHeistExitCraftIconState::None;
    this->SecondsUntilIncoming = 0;
    this->bTeamHasBling = false;
}

