#include "FortRealMoneyOffer.h"


bool UFortRealMoneyOffer::GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}

UFortRealMoneyOffer::UFortRealMoneyOffer() {
    this->PurchaseUnavailableModalClass = NULL;
    this->ItemPreviewDetailsClass = NULL;
    this->RealMoneyDetailsClass = NULL;
}

