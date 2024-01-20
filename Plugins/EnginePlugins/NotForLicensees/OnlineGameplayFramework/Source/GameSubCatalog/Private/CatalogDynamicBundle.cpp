#include "CatalogDynamicBundle.h"

FCatalogDynamicBundle::FCatalogDynamicBundle() {
    this->BasePrice = 0;
    this->CurrencyType = EStoreCurrencyType::RealMoney;
    this->DisplayType = ECatalogSaleType::NotOnSale;
}

