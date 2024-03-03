#include "FortLinkDataManager.h"

void UFortLinkDataManager::QueryLinkDataByCode(const FString& LinkCode, const FOnQueryLinkDataComplete& Callback) {
}

FText UFortLinkDataManager::GetLinkTitle(const FCreativeLoadedLinkData& LinkData) const {
    return FText::GetEmpty();
}

FText UFortLinkDataManager::GetLinkTagline(const FCreativeLoadedLinkData& LinkData) const {
    return FText::GetEmpty();
}

FText UFortLinkDataManager::GetLinkIntroduction(const FCreativeLoadedLinkData& LinkData) const {
    return FText::GetEmpty();
}

TArray<FCreativeIslandDescriptionTag> UFortLinkDataManager::GetIslandDescriptionTags(const FCreativeLoadedLinkData& LinkData) const {
    return TArray<FCreativeIslandDescriptionTag>();
}

void UFortLinkDataManager::DownloadThumbnail(const FCreativeLoadedLinkData& LinkData, const FOnDownloadLinkThumbnailComplete& Callback) {
}

UFortLinkDataManager::UFortLinkDataManager() {
}

