#include "FortWindImpulseCylinderDelta.h"

FFortWindImpulseCylinderDelta::FFortWindImpulseCylinderDelta() {
    this->bInitialized = false;
    this->bRippleOutward = false;
    this->SectionWidth = 1;
    this->InnerSectionRadius = 1;
    this->OuterSectionRadius = 1;
    this->MaximumRadius = 1;
    this->DesiredOverallBlendTime = 1;
    this->SectionBlendTime = 1;
    this->SectionCurrentBlendTime = 1;
    this->PreviousMagnitude = 1;
    this->SectionCurrentMagnitude = 1;
    this->DesiredMagnitude = 1;
}

