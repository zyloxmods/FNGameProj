#include "FortHeroLoadoutPedestal.h"


void AFortHeroLoadoutPedestal::HandleMcpProfilesInitialized() {
}

void AFortHeroLoadoutPedestal::HandleDifferentLoadoutViewed(const UFortCampaignHeroLoadoutItem* PreviousLoadout, const UFortCampaignHeroLoadoutItem* CurrentLoadout) {
}

void AFortHeroLoadoutPedestal::HandleDifferentHeroLoadoutSlotFocused(const FName FocusedSlotName) {
}

AFortHeroLoadoutPedestal::AFortHeroLoadoutPedestal() {
    this->bIsSlotFocusedInUI = false;
}

