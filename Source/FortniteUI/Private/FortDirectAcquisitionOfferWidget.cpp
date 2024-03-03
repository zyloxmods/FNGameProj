#include "FortDirectAcquisitionOfferWidget.h"

int32 UFortDirectAcquisitionOfferWidget::GetCurrencySeasonReward() const {
    return 0;
}

UFortDirectAcquisitionOfferWidget::UFortDirectAcquisitionOfferWidget() {
    this->bIsBattlePass = false;
    this->ItemShopDetailsScreenClass = NULL;
    this->BattlePassPurchaseScreenClass = NULL;
    this->NoPreviewItemShopDetailsScreenClass = NULL;
}

