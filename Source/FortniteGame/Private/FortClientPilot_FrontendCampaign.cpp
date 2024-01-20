#include "FortClientPilot_FrontendCampaign.h"

UFortClientPilot_FrontendCampaign::UFortClientPilot_FrontendCampaign() {
    this->bShouldPickRandomMap = false;
    this->iSelectedTheater = 0;
    this->iSelectedTile = -1;
    this->RandomZoneDifficultyMinimum = 1.00f;
    this->RandomZoneDifficultyMaximum = 100.00f;
}

