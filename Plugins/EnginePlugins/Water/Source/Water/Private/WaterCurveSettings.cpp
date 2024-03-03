#include "WaterCurveSettings.h"

FWaterCurveSettings::FWaterCurveSettings() {
    this->bUseCurveChannel = false;
    this->ElevationCurveAsset = NULL;
    this->ChannelEdgeOffset = 1;
    this->ChannelDepth = 1;
    this->CurveRampWidth = 1;
}

