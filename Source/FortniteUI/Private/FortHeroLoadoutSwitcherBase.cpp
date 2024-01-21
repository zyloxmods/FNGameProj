#include "FortHeroLoadoutSwitcherBase.h"


void UFortHeroLoadoutSwitcherBase::Update(const UFortCampaignHeroLoadoutItem* HeroLoadout) {
}

UFortHeroLoadoutSwitcherBase::UFortHeroLoadoutSwitcherBase() {
    this->HBox_LoadoutPagingContainer = NULL;
    this->HeroLoadoutCommanderDetailsHostPanel = NULL;
    this->HeroAbilitiesAndGadgets = NULL;
    this->TextBlock_LoadoutDisplayName = NULL;
    this->Button_PageLeft = NULL;
    this->Button_PageRight = NULL;
}

