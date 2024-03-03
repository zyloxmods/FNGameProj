#include "DynamicCompositeWorld.h"

FDynamicCompositeWorld::FDynamicCompositeWorld() {
    this->CameraOverride = EFrontEndCamera::Invalid;
    this->GetDefaultLevelTransitionTime = 1;
    this->bStreamInOnDemand = false;
    this->bStreamInLevel = false;
    this->bLevelStreamedIn = false;
}

