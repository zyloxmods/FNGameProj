#include "CatalogItemPrice.h"

FCatalogItemPrice::FCatalogItemPrice() {
    this->CurrencyType = EStoreCurrencyType::RealMoney;
    this->RegularPrice = 0;
    this->FinalPrice = 0;
    this->SaleType = ECatalogSaleType::NotOnSale;
    this->AppStoreId = EAppStore::DebugStore;
}

