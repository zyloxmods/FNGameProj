#include "FortPerksWidget_NUI.h"

void UFortPerksWidget_NUI::SetState(EFortPerksWidgetState InState, UFortHero* InEvolutionOption) {
}

void UFortPerksWidget_NUI::SetHero(UFortHero* InHero) {
}

void UFortPerksWidget_NUI::ProcessPerkTiers() {
}

void UFortPerksWidget_NUI::ProcessPerks() {
}

void UFortPerksWidget_NUI::ProcessActiveAbilityPerksAsync() {
}





UFortPerksWidget_NUI::UFortPerksWidget_NUI() {
    this->Hero = NULL;
    this->State = EFortPerksWidgetState::Normal;
    this->EvolutionOption = NULL;
    this->PerkTierWidgetType = NULL;
    this->PerkWidgetType = NULL;
    this->TooltipContext = NULL;
    this->PerksListLoadGuard = NULL;
}

