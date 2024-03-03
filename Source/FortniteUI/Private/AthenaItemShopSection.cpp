#include "AthenaItemShopSection.h"


void UAthenaItemShopSection::HandleOfferSeenInDetails(const FString& OfferId) {
}

void UAthenaItemShopSection::HandleCarouselOfferChanged(UFortStoreFrontOfferWidgetBase* Target, const FString& OfferId) {
}

UAthenaItemShopSection::UAthenaItemShopSection() {
    this->Text_Title = NULL;
    this->Text_TimeRemaining = NULL;
    this->Icon_TimeRemaining = NULL;
}

