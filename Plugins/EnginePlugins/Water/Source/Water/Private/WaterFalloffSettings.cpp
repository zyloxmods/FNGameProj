#include "WaterFalloffSettings.h"

FWaterFalloffSettings::FWaterFalloffSettings() {
    this->FalloffMode = EWaterBrushFalloffMode::Angle;
    this->FalloffAngle = 1;
    this->FalloffWidth = 1;
    this->EdgeOffset = 1;
    this->ZOffset = 1;
}

