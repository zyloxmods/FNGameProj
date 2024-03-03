#include "FortCosmeticLoadoutCard.h"


void UFortCosmeticLoadoutCard::HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile) {
}

TSoftObjectPtr<UTexture2D> UFortCosmeticLoadoutCard::GetCharacterPreviewImage() {
    return NULL;
}

UFortCosmeticLoadoutCard::UFortCosmeticLoadoutCard() {
    this->CardType = EFortLoadoutCardType::Items;
    this->bSaved = true;
    this->WidthToHeightRatio = 1;
    this->CardWidth = 1;
    this->WipedownAnimation = NULL;
    this->SizeBox_Card = NULL;
}

