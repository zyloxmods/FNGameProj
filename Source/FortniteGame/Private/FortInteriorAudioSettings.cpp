#include "FortInteriorAudioSettings.h"

UFortInteriorAudioSettings::UFortInteriorAudioSettings() {
    this->HorizontalScanDistance = 0;
    this->VerticalScanDistance = 0;
    this->TraceCollisionChannel = ECC_WorldStatic;
    this->TotalBuildingCountRequiredForInterior = 0;
    this->TotalNonPartialBuildingCountRequiredForInterior = 0;
    this->InteriorSoundMix = NULL;
    this->PartialInteriorSoundMix = NULL;
    this->AmbientEntryPriority = 0;
    this->AmbientBanks[0] = NULL;
    this->AmbientBanks[1] = NULL;
    this->AmbientBanks[2] = NULL;
    this->AmbientBanks[3] = NULL;
    this->AmbientBanks[4] = NULL;
    this->SourceBusAsset = NULL;
    this->SourceBusFadeInTime = 1;
    this->SourceBusFadeOutTime = 1;
    this->SourceBusCrossfadeTime = 1;
}

