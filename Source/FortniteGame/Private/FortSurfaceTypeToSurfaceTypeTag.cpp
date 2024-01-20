#include "FortSurfaceTypeToSurfaceTypeTag.h"

FFortSurfaceTypeToSurfaceTypeTag::FFortSurfaceTypeToSurfaceTypeTag() {
    this->FootSurfaceType = EFortFootstepSurfaceType::Default;
    this->SurfaceType = SurfaceType_Default;
    this->bAllowsSurfaceRetriggerOfEvents = false;
}

