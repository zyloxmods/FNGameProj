#include "FortMtxStoreRootBase.h"

void UFortMtxStoreRootBase::SetStorefrontNames(const TArray<FString>& InStorefrontNames) {
}

void UFortMtxStoreRootBase::PushStoreSelection() {
}


void UFortMtxStoreRootBase::OnStartReadingOffers_Implementation() {
}




TArray<FString> UFortMtxStoreRootBase::GetStorefrontNames() const {
    return TArray<FString>();
}

FMtxBreakdown UFortMtxStoreRootBase::GetMtxBreakdown() const {
    return FMtxBreakdown{};
}

void UFortMtxStoreRootBase::GenerateOfferWidget_Implementation(UFortStoreFrontOfferInfo* OfferData) {
}

void UFortMtxStoreRootBase::ClearOfferWidgets_Implementation() {
}

bool UFortMtxStoreRootBase::AreOffersLoaded() const {
    return false;
}

UFortMtxStoreRootBase::UFortMtxStoreRootBase() {
    this->MtxStoreSelectionWidget = NULL;
    this->MtxStoreSelectionClass = NULL;
}

