#include "FortWindImpulseCylinderDelta.h"

FFortWindImpulseCylinderDelta::FFortWindImpulseCylinderDelta() {
    bInitialized = false;
    bRippleOutward = false;
    SectionWidth = 1;
    InnerSectionRadius = 1;
    OuterSectionRadius = 1;
    MaximumRadius = 1;
    DesiredOverallBlendTime = 1;
    SectionBlendTime = 1;
    SectionCurrentBlendTime = 1;
    PreviousMagnitude = 1;
    SectionCurrentMagnitude = 1;
    DesiredMagnitude = 1;
}

