#include "FortHeroLoadoutPerkTileBase.h"


UFortHeroLoadoutPerkTileBase::UFortHeroLoadoutPerkTileBase() {
    this->BrushSize = EFortBrushSize::Large;
    this->bShowSummaryDescription = false;
    this->Text_PerkName = NULL;
    this->Text_Description = NULL;
    this->Image_PerkIcon = NULL;
    this->Hbox_PerkDetails = NULL;
    this->InactiveOpacity = 0.50f;
    this->ActiveOpacity = 1.00f;
    this->AbilityKit = NULL;
}

