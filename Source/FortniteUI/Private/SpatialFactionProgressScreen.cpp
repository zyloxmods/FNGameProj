#include "SpatialFactionProgressScreen.h"



void USpatialFactionProgressScreen::HandlePerkSelected(UCommonButton* AssociatedButton, int32 Index) {
}

USpatialFactionProgressScreen::USpatialFactionProgressScreen() {
    this->Faction1PerksItemDef = NULL;
    this->Faction2PerksItemDef = NULL;
    this->ButtonGroup_FactionPerks = NULL;
    this->Button_SwapFaction = NULL;
    this->SpatialFaction_ShadowButton = NULL;
    this->SpatialFaction_GhostButton = NULL;
    this->EntryBox_FactionPerkTiers = NULL;
    this->ScrollBox_PerkItems = NULL;
    this->Icon_PlayerImage = NULL;
    this->Text_PlayerName = NULL;
}

