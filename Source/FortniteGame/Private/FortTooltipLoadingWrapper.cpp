#include "FortTooltipLoadingWrapper.h"

void UFortTooltipLoadingWrapper::HandleTooltipAssetLoaded() {
}

bool UFortTooltipLoadingWrapper::AreAssetsLoaded() const {
    return false;
}

UFortTooltipLoadingWrapper::UFortTooltipLoadingWrapper() {
    SourceObject = NULL;
    TooltipInstance = NULL;
}

