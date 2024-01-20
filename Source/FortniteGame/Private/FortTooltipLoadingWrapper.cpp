#include "FortTooltipLoadingWrapper.h"

void UFortTooltipLoadingWrapper::HandleTooltipAssetLoaded() {
}

bool UFortTooltipLoadingWrapper::AreAssetsLoaded() const {
    return false;
}

UFortTooltipLoadingWrapper::UFortTooltipLoadingWrapper() {
    this->SourceObject = NULL;
    this->TooltipInstance = NULL;
}

