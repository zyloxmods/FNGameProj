#include "CatalogPurchaseInfo.h"

FCatalogPurchaseInfo::FCatalogPurchaseInfo() {
    this->PurchaseQuantity = 0;
    this->Currency = EStoreCurrencyType::RealMoney;
    this->ExpectedTotalPrice = 0;
}

