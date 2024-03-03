#include "FortStoreFrontOfferWidgetBase.h"



void UFortStoreFrontOfferWidgetBase::SetupOffer(UFortStoreFrontOfferInfo* InOfferData) {
}

void UFortStoreFrontOfferWidgetBase::SetStoreRoot(UFortMtxStoreRootBase* InStoreRoot) {
}

void UFortStoreFrontOfferWidgetBase::SetIndexInSection(int32 InIndexInSection) {
}

void UFortStoreFrontOfferWidgetBase::SendShopInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferWidgetBase::SendSeasonPassInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferWidgetBase::SendRealMoneyStoreInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferWidgetBase::RemoveAllOffers() {
}







void UFortStoreFrontOfferWidgetBase::OnDetailsOpened(UFortStoreFrontOfferDetailsWidgetBase* DetailsWidget) {
}

void UFortStoreFrontOfferWidgetBase::HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo) {
}

void UFortStoreFrontOfferWidgetBase::HandleCarouselOfferChanged() {
}

UFortMtxStoreRootBase* UFortStoreFrontOfferWidgetBase::GetStoreRoot() const {
    return NULL;
}

UFortStoreFrontOfferInfo* UFortStoreFrontOfferWidgetBase::GetOfferInfo() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortStoreFrontOfferWidgetBase::GetFirstOfferSeriesBackgroundTexture() const {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> UFortStoreFrontOfferWidgetBase::GetFirstOfferSeriesBackgroundMaterial() const {
    return NULL;
}

void UFortStoreFrontOfferWidgetBase::AddOffer(UFortStoreFrontOfferInfo* InOfferData) {
}

UFortStoreFrontOfferWidgetBase::UFortStoreFrontOfferWidgetBase() {
    this->MainImageLoadGuard = NULL;
    this->ThumbnailRendererClass = NULL;
    this->OfferData = NULL;
    this->ThumbnailRenderer = NULL;
}

