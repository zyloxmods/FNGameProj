#include "FortItemShopTile.h"

void UFortItemShopTile::ShowNextPresentation() {
}











UFortMtxOfferData* UFortItemShopTile::GetLegacyDisplayAsset() const {
    return NULL;
}

UFortItemShopTile::UFortItemShopTile() {
    this->ThumbnailRenderer = NULL;
    this->ThumbnailRendererClass = NULL;
    this->ItemCaptureActorClass = NULL;
    this->CaptureActorZOffset = 1;
    this->TimeBetweenPresentationSwaps = 1;
    this->Text_Name = NULL;
    this->Text_Details = NULL;
    this->Text_Price = NULL;
    this->Text_PreviousPrice = NULL;
    this->Overlay_SalePrice = NULL;
    this->Image_RarityStripe = NULL;
    this->Switcher_OwningStatus = NULL;
    this->TileState_Owned = NULL;
    this->TileState_NotOwned = NULL;
    this->Overlay_Violator = NULL;
    this->TagRotator_ItemTags = NULL;
    this->LoadGuard_Image = NULL;
    this->Image_Offer = NULL;
    this->Image_NextOffer = NULL;
    this->Image_AnimatedWrap = NULL;
    this->MaterialBacking_Rarity = NULL;
    this->MaterialBacking_NoRarity = NULL;
}

