#include "FortPlayerInputSettings.h"

UFortPlayerInputSettings::UFortPlayerInputSettings() {
    this->HoldInputTime = 0.00f;
    this->HoldCraftAmmoTime = 0.00f;
    this->HoldHudChatTime = 0.00f;
    this->HoldVoteDialogTime = 0.00f;
    this->bBuildingPickerOnlyChoosesCategories = false;
    this->bWeaponPickerShowOnlySlottedItems = false;
    this->bTrapPickerUsesRadial = false;
    this->bRadialClosesOnRelease = false;
    this->NumActiveTrapSlots = 3;
    this->bWeaponSlotsAreSharedWhenUsingGamepad = false;
    this->bEditModeUsableFromCombatMode = false;
    this->bOnlyShowNextPrevBuildingSlotKeybinds = false;
    this->bEnabledForCampaign = false;
    this->bEnabledForAthena = false;
}

