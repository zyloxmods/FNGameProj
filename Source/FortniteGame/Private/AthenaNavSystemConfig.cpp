#include "AthenaNavSystemConfig.h"

UAthenaNavSystemConfig::UAthenaNavSystemConfig() {
    this->SupportedAgents.AddDefaulted(1);
    this->bUseBuildingGridAsNavigableSpace = true;
    this->bDiscardNavDataFromSublevels = false;
    this->bShouldDiscardSubLevelNavData = false;
    this->bUseNavigationInvokers = false;
    this->bLazyOctree = false;
    this->bUseNavOctTreeExclusionBounds = false;
}

