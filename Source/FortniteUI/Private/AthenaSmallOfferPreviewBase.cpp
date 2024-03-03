#include "AthenaSmallOfferPreviewBase.h"

void UAthenaSmallOfferPreviewBase::SetupOffer(UFortStoreFrontOfferInfo* InOfferData) {
}


UFortStoreFrontOfferInfo* UAthenaSmallOfferPreviewBase::GetOfferInfo() const {
    return NULL;
}

UAthenaSmallOfferPreviewBase::UAthenaSmallOfferPreviewBase() {
    this->OfferData = NULL;
}

