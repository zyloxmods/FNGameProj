#include "FortInteriorAudioSettings.h"

UFortInteriorAudioSettings::UFortInteriorAudioSettings() {
    HorizontalScanDistance = 0;
    VerticalScanDistance = 0;
    TraceCollisionChannel = ECC_WorldStatic;
    TotalBuildingCountRequiredForInterior = 0;
    TotalNonPartialBuildingCountRequiredForInterior = 0;
    InteriorSoundMix = NULL;
    PartialInteriorSoundMix = NULL;
    AmbientEntryPriority = 0;
    AmbientBanks[0] = NULL;
    AmbientBanks[1] = NULL;
    AmbientBanks[2] = NULL;
    AmbientBanks[3] = NULL;
    AmbientBanks[4] = NULL;
    SourceBusAsset = NULL;
    SourceBusFadeInTime = 1;
    SourceBusFadeOutTime = 1;
    SourceBusCrossfadeTime = 1;
}

