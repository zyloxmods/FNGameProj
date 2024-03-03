#include "FortCosmeticItemCard.h"


void UFortCosmeticItemCard::SetItemToRepresent(const UFortItem* InItemToRepresent) {
}










UFortCosmeticItemCard::UFortCosmeticItemCard() {
    this->bIsReward = false;
    this->bIsItemIconEnabled = true;
    this->bIsDetailIconEnabled = true;
    this->bIsQuantityEnabled = true;
    this->WidthToHeightRatio = 1;
    this->RewardWidthToHeightRatio = 1;
    this->CardWidth = 1;
    this->RewardCardWidth = 1;
    this->DefaultItemCardMaterial = NULL;
    this->MinWidgetWidthForLargeAsset = 1;
    this->MinWidgetWidthForLargeAssetMobile = 1;
    this->SizeBox_NewItemCard = NULL;
    this->Image_NewItemCard = NULL;
    this->LoadGuard = NULL;
    this->ItemToRepresent = NULL;
}

