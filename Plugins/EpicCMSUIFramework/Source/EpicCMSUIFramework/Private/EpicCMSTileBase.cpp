#include "EpicCMSTileBase.h"

void UEpicCMSTileBase::Launch() {
}

UEpicCMSTileBase::UEpicCMSTileBase() {
    this->DefaultTitleTextStyle = NULL;
    this->FeaturedTitleTextStyle = NULL;
    this->bDownloadingExternalMedia = false;
    this->bRefreshingMcpCatalog = false;
    this->ExternalMedia = NULL;
    this->LazyImage_Icon = NULL;
    this->TitleTextBlock = NULL;
    this->SubtitleTextBlock = NULL;
    this->EyebrowTextBlock = NULL;
}

