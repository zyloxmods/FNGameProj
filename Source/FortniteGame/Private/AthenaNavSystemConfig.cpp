#include "AthenaNavSystemConfig.h"

UAthenaNavSystemConfig::UAthenaNavSystemConfig() {
    bUseNavDataSetVariants = false;
    bUseBuildingGridAsNavigableSpace = true;
    bDiscardNavDataFromSublevels = false;
    bUseNavigationInvokers = false;
    bLazyOctree = false;
    bUseNavOctTreeInclusionBounds = false;
    bPrioritizeNavigationAroundSpawners = false;
    bResetDirtyAreasOnInitialBuildingRelease = true;
    bSupportRuntimeNavmeshDisabling = true;
}

