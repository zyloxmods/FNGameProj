#include "EpicCMSImage.h"

void UEpicCMSImage::SetMediaURL(const FString& MediaUrl) {
}

UEpicCMSImage::UEpicCMSImage() {
    this->ExternalMedia = NULL;
    this->bDownloadingExternalMedia = false;
}

