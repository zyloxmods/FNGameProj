#include "FortPlayerInputSettings.h"

UFortPlayerInputSettings::UFortPlayerInputSettings() {
    HoldInputTime = 1;
    HoldCraftAmmoTime = 1;
    HoldHudChatTime = 1;
    HoldVoteDialogTime = 1;
    bBuildingPickerOnlyChoosesCategories = false;
    bWeaponPickerShowOnlySlottedItems = false;
    bTrapPickerUsesRadial = false;
    bRadialClosesOnRelease = false;
    NumActiveTrapSlots = 0;
    bWeaponSlotsAreSharedWhenUsingGamepad = false;
    bEditModeUsableFromCombatMode = false;
    bOnlyShowNextPrevBuildingSlotKeybinds = false;
    bEnabledForCampaign = false;
    bEnabledForAthena = false;
}

