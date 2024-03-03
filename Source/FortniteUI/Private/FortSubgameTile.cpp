#include "FortSubgameTile.h"

bool UFortSubgameTile::TrySetSubgameImageFromCMS() {
    return false;
}

bool UFortSubgameTile::TryGetSubgameDataFromCMS(FSubgameDisplayData& SubgameData) {
    return false;
}

UFortSubgameTile::UFortSubgameTile() {
    this->SubgameType = ESubgameTileType::Campaign;
    this->CMS_LoadType = ESubgameLoadFromCMS::DoNotLoadFromCMS;
    this->KeyArt = NULL;
    this->GradientBrush = NULL;
    this->Image_KeyArt = NULL;
    this->Text_Title = NULL;
    this->Text_Description = NULL;
    this->Text_StandardMessageLine1 = NULL;
    this->Text_StandardMessageLine2 = NULL;
    this->Border_StandardMessageBackground = NULL;
    this->Text_SpecialMessage = NULL;
    this->Border_SpecialMessageBackground = NULL;
    this->Image_UnfocusedOverlay = NULL;
    this->Image_Gradient = NULL;
}

