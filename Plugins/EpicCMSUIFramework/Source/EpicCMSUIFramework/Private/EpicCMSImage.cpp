#include "EpicCMSImage.h"

void UEpicCMSImage::SetMediaURL(const FString& MediaUrl) {
}

UEpicCMSImage::UEpicCMSImage() {
    this->bMatchImageSize = true;
    this->ExternalMedia = NULL;
    this->bDownloadingExternalMedia = false;
}

