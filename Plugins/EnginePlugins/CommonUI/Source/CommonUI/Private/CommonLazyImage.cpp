#include "CommonLazyImage.h"

void UCommonLazyImage::SetMaterialTextureParamName(FName TextureParamName) {
}

void UCommonLazyImage::SetBrushFromLazyTexture(const TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize) {
}

void UCommonLazyImage::SetBrushFromLazyMaterial(const TSoftObjectPtr<UMaterialInterface>& LazyMaterial) {
}

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize) {
}

bool UCommonLazyImage::IsLoading() const {
    return false;
}

UCommonLazyImage::UCommonLazyImage() {
}

