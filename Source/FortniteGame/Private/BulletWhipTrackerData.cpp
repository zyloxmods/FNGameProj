#include "BulletWhipTrackerData.h"

FBulletWhipTrackerData::FBulletWhipTrackerData() {
    this->bAttachSoundToOwner = false;
    this->PassByRadiusMax = 0.00f;
    this->PassByRadiusMin = 0.00f;
    this->PassByFarSound = NULL;
    this->PassByCloseSound = NULL;
    this->MinimumTriggerDistance = 0.00f;
    this->TriggerAheadDistance = 0.00f;
    this->CurrentAudioComp = NULL;
    this->PreviousPlaneDotProd = 0.00f;
    this->CachedPassDistance = 0.00f;
    this->PassByClosenessIntensity = 0.00f;
    this->bActive = false;
}

