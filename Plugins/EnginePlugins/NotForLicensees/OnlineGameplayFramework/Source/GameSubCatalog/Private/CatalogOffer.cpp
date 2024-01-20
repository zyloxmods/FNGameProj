#include "CatalogOffer.h"

FCatalogOffer::FCatalogOffer() {
    this->OfferType = ECatalogOfferType::StaticPrice;
    this->DailyLimit = 0;
    this->WeeklyLimit = 0;
    this->MonthlyLimit = 0;
    this->CatalogGroupPriority = 0;
    this->SortPriority = 0;
    this->Refundable = false;
}

