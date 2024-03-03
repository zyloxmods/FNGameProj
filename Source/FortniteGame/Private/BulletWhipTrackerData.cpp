#include "BulletWhipTrackerData.h"

FBulletWhipTrackerData::FBulletWhipTrackerData() {
    this->bAttachSoundToOwner = false;
    this->PassByRadiusMax = 1;
    this->PassByRadiusMin = 1;
    this->PassByFarSound = NULL;
    this->PassByCloseSound = NULL;
    this->MinimumTriggerDistance = 1;
    this->TriggerAheadDistance = 1;
    this->CurrentAudioComp = NULL;
    this->PreviousPlaneDotProd = 1;
    this->CachedPassDistance = 1;
    this->PassByClosenessIntensity = 1;
    this->bActive = false;
}

