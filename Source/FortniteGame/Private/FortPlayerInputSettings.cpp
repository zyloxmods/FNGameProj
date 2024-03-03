#include "FortPlayerInputSettings.h"

UFortPlayerInputSettings::UFortPlayerInputSettings() {
    this->HoldInputTime = 1;
    this->HoldCraftAmmoTime = 1;
    this->HoldHudChatTime = 1;
    this->HoldVoteDialogTime = 1;
    this->bBuildingPickerOnlyChoosesCategories = false;
    this->bWeaponPickerShowOnlySlottedItems = false;
    this->bTrapPickerUsesRadial = false;
    this->bRadialClosesOnRelease = false;
    this->NumActiveTrapSlots = 0;
    this->bWeaponSlotsAreSharedWhenUsingGamepad = false;
    this->bEditModeUsableFromCombatMode = false;
    this->bOnlyShowNextPrevBuildingSlotKeybinds = false;
    this->bEnabledForCampaign = false;
    this->bEnabledForAthena = false;
}

