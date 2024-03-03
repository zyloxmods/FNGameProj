#include "FortLlamaStoreOfferInfo.h"

UFortCardPackItemDefinition* UFortLlamaStoreOfferInfo::GetLlamaOfferDisplayAsset() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortLlamaStoreOfferInfo::GetDisplayAssetXrayImage() const {
    return NULL;
}

UFortPackPersonality* UFortLlamaStoreOfferInfo::GetDisplayAssetPersonality() const {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UFortLlamaStoreOfferInfo::GetDisplayAssetImage() const {
    return NULL;
}

UTexture* UFortLlamaStoreOfferInfo::GetDisplayAssetIcon() const {
    return NULL;
}

UFortLlamaStoreOfferInfo::UFortLlamaStoreOfferInfo() {
    this->LlamaOfferDisplayAsset = NULL;
}

