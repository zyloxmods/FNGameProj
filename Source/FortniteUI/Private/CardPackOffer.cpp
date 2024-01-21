#include "CardPackOffer.h"

FCardPackOffer::FCardPackOffer() {
    this->MtxPrice = 0;
    this->SaleType = ECatalogSaleType::NotOnSale;
    this->Price = 0;
    this->RegularPrice = 0;
    this->CurrencyType = NULL;
    this->QuantityRemaining = 0;
    this->bTimedOffer = false;
}

