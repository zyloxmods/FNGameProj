#include "FortMtxStoreRootBase.h"

void UFortMtxStoreRootBase::SetStorefrontNames(const TArray<FString>& InStorefrontNames) {
}

void UFortMtxStoreRootBase::PushStoreSelection() {
}






FMtxBreakdown UFortMtxStoreRootBase::GetMtxBreakdown() const {
    return FMtxBreakdown{};
}

void UFortMtxStoreRootBase::GenerateOfferWidget_Implementation(UFortStoreFrontOfferInfo* OfferData) {
}


bool UFortMtxStoreRootBase::AreOffersLoaded() const {
    return false;
}

UFortMtxStoreRootBase::UFortMtxStoreRootBase() {
    this->MtxStoreSelectionWidget = NULL;
    this->MtxStoreSelectionClass = NULL;
}

