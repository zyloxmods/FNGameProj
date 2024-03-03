#include "FortLlamaStoreBase.h"


bool UFortLlamaStoreBase::ShouldShowXRayTickets(const UFortAccountItemDefinition* XRayCurrencyDefinition) const {
    return false;
}

void UFortLlamaStoreBase::SetupFocus() {
}

void UFortLlamaStoreBase::OnStoreStateChanged(EFortStoreState NewStoreState) {
}

void UFortLlamaStoreBase::OnStorePurchaseCompleted() {
}


UFortLlamaStoreBase::UFortLlamaStoreBase() {
    this->OfferEntryBox = NULL;
    this->OfferButtonGroup = NULL;
    this->OfferDetails = NULL;
    this->StoreData = NULL;
    this->Button_UnopenedLlamas = NULL;
    this->ProgressModal = NULL;
    this->PendingPurchaseOffer = NULL;
    this->StoreOpeningCardPack = NULL;
    this->bHideSoldOffers = false;
}

