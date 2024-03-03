#include "FortFootstepSurfaceData.h"

void UFortFootstepSurfaceData::GetSurfaceInfo(FFortFootstepSurfaceInfo& OutInfo, bool bUse1PFootsteps) const {
}

UFortFootstepSurfaceData::UFortFootstepSurfaceData() {
    this->VerticalPitchMaxBelow = 1;
    this->VerticalPitchMaxAbove = 1;
    this->VerticalPitchTileRange = 1;
}

