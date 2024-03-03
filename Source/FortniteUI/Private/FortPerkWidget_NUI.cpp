#include "FortPerkWidget_NUI.h"

void UFortPerkWidget_NUI::SetTooltipContext(const UFortTooltipContext* InTooltipContext) {
}

void UFortPerkWidget_NUI::RequestTooltipDescription() {
}

void UFortPerkWidget_NUI::RequestCombinedTooltipDescription() {
}




bool UFortPerkWidget_NUI::IsTierPerk() const {
    return false;
}

bool UFortPerkWidget_NUI::IsPerkUnlocked() const {
    return false;
}

bool UFortPerkWidget_NUI::IsPerkHighlighted() const {
    return false;
}

bool UFortPerkWidget_NUI::IsPerkEmpty() const {
    return false;
}

bool UFortPerkWidget_NUI::HasAbility() const {
    return false;
}

void UFortPerkWidget_NUI::HandleAbilityKitTooltipLoaded() {
}

FText UFortPerkWidget_NUI::GetTooltipTitle() const {
    return FText::GetEmpty();
}

UFortTooltipContext* UFortPerkWidget_NUI::GetTooltipContext() {
    return NULL;
}

EFortSupportBonusType UFortPerkWidget_NUI::GetSupportBonusType() const {
    return EFortSupportBonusType::Normal;
}

int32 UFortPerkWidget_NUI::GetRequiredLevel() const {
    return 0;
}

EFortItemTier UFortPerkWidget_NUI::GetPerkTier() const {
    return EFortItemTier::No_Tier;
}

bool UFortPerkWidget_NUI::GetIcon(FSlateBrush& Brush) const {
    return false;
}

UFortPerkWidget_NUI::UFortPerkWidget_NUI() {
    this->CachedTooltipContext = NULL;
    this->bShouldUseSummaryTooltip = false;
    this->CachedTooltipLoadingWrapper = NULL;
}

