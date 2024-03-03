#include "AthenaNavSystemConfig.h"

UAthenaNavSystemConfig::UAthenaNavSystemConfig() {
    this->bUseNavDataSetVariants = false;
    this->bUseBuildingGridAsNavigableSpace = true;
    this->bDiscardNavDataFromSublevels = false;
    this->bUseNavigationInvokers = false;
    this->bLazyOctree = false;
    this->bUseNavOctTreeInclusionBounds = false;
    this->bPrioritizeNavigationAroundSpawners = false;
    this->bResetDirtyAreasOnInitialBuildingRelease = true;
    this->bSupportRuntimeNavmeshDisabling = true;
}

