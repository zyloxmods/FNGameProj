#include "AthenaItemShopSectionDisplayData.h"

FAthenaItemShopSectionDisplayData::FAthenaItemShopSectionDisplayData() {
    this->bSortOffersByOwnership = false;
    this->bShowIneligibleOffers = false;
    this->bShowIneligibleOffersIfGiftable = false;
    this->bSplitByPrice = false;
    this->bShowTimerIcon = false;
    this->bEnableToastNotification = false;
    this->BangType = EFortBangType::Invalid;
}

