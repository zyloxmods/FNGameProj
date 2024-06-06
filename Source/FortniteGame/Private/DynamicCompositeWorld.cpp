#include "DynamicCompositeWorld.h"

FDynamicCompositeWorld::FDynamicCompositeWorld() {
    CameraOverride = EFrontEndCamera::Invalid;
    GetDefaultLevelTransitionTime = 1;
    bStreamInOnDemand = false;
    bStreamInLevel = false;
    bLevelStreamedIn = false;
}

