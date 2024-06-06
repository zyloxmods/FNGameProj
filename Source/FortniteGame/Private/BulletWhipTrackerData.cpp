#include "BulletWhipTrackerData.h"

FBulletWhipTrackerData::FBulletWhipTrackerData() {
    bAttachSoundToOwner = false;
    PassByRadiusMax = 1;
    PassByRadiusMin = 1;
    PassByFarSound = NULL;
    PassByCloseSound = NULL;
    MinimumTriggerDistance = 1;
    TriggerAheadDistance = 1;
    CurrentAudioComp = NULL;
    PreviousPlaneDotProd = 1;
    CachedPassDistance = 1;
    PassByClosenessIntensity = 1;
    bActive = false;
}

