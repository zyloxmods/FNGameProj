#include "AthenaCustomizationScreenBase.h"

void UAthenaCustomizationScreenBase::ShowLockerSlot(EAthenaCustomizationCategory CustomizationCategory, int32 SlotIndex, bool bCanShowEmpty) {
}

bool UAthenaCustomizationScreenBase::ShouldDisplayNextRandomPresetName() const {
    return false;
}

void UAthenaCustomizationScreenBase::ShiftItemsVariantOption(UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex) {
}

void UAthenaCustomizationScreenBase::SetCustomizationSelectionBeingProcessed(bool bIsBeingProcessed) {
}







void UAthenaCustomizationScreenBase::HandleInventoryUpdated(const TSet<FString>& ItemChangeFlags, int64 ProfileRevision) {
}

FText UAthenaCustomizationScreenBase::GetItemTypeDisplayNames(EAthenaCustomizationCategory InCategory) {
    return FText::GetEmpty();
}

UFortItem* UAthenaCustomizationScreenBase::GetFavoriteItemForCategory(EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex) {
    return NULL;
}

FText UAthenaCustomizationScreenBase::GetCategoryDisplayName(EAthenaCustomizationCategory InCategory) {
    return FText::GetEmpty();
}

UAthenaCustomizationScreenBase::UAthenaCustomizationScreenBase() {
    this->bCustomizationSelectionBeingProcessed = false;
    this->FirstCustomizationCategory = EAthenaCustomizationCategory::None;
    this->ItemSelectorScreenClass = NULL;
    this->LoadoutSelectorScreenClass = NULL;
    this->BannerSelectModalClass = NULL;
    this->NameLoadoutPopupClass = NULL;
    this->ProgressModalClass = NULL;
    this->ProgressModalInstance = NULL;
    this->LastHoveredSlot = NULL;
    this->BuiltInEmoteCategoryPriorities.AddDefaulted(3);
    this->bDisplayBuiltInEmotesInEmoteRow = true;
    this->BoundAnim_Intro = NULL;
    this->BoundAnim_Outro = NULL;
    this->Container_Loadouts_GodTileArea = NULL;
    this->Button_Loadouts = NULL;
    this->Button_SavePreset = NULL;
    this->Button_RandomPresets = NULL;
    this->Loadout_Selector = NULL;
    this->LoadoutCard_AppliedAnimation = NULL;
    this->Panel_GearSlotRow = NULL;
    this->Slot_Glider = NULL;
    this->Slot_Contrail = NULL;
    this->Slot_LoadingScreen = NULL;
    this->Panel_EmoteSlotRow = NULL;
    this->Panel_WrapSlotRow = NULL;
    this->Panel_AccountSlotRow = NULL;
    this->Banner_Button = NULL;
    this->ItemInfo_Display = NULL;
}

