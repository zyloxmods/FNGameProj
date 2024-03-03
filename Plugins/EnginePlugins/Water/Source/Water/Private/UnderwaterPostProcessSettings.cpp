#include "UnderwaterPostProcessSettings.h"

FUnderwaterPostProcessSettings::FUnderwaterPostProcessSettings() {
    this->bEnabled = false;
    this->Priority = 1;
    this->BlendRadius = 1;
    this->BlendWeight = 1;
    this->UnderwaterPostProcessMaterial = NULL;
}

