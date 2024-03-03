#include "CatalogDynamicBundle.h"

FCatalogDynamicBundle::FCatalogDynamicBundle() {
    this->DiscountedBasePrice = 0;
    this->RegularBasePrice = 0;
    this->FloorPrice = 0;
    this->CurrencyType = EStoreCurrencyType::RealMoney;
    this->DisplayType = ECatalogSaleType::NotOnSale;
}

