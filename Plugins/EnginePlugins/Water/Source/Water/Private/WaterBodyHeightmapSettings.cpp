#include "WaterBodyHeightmapSettings.h"

FWaterBodyHeightmapSettings::FWaterBodyHeightmapSettings() {
    this->BlendMode = EWaterBrushBlendType::AlphaBlend;
    this->bInvertShape = false;
    this->Priority = 0;
}

