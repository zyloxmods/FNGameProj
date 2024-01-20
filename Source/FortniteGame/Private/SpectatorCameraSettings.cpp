#include "SpectatorCameraSettings.h"

FSpectatorCameraSettings::FSpectatorCameraSettings() {
    this->bPlayerOutlinesEnabled = false;
    this->bStormEffectsEnabled = false;
    this->SafeZoneOpacity = 0.00f;
    this->bRelevancyZoneVisible = false;
    this->bHighQualityFxEnabled = false;
    this->bDamageFxEnabled = false;
    this->ThirdPersonAutoFollowMode = EThirdPersonAutoFollowMode::Off;
    this->ThirdPersonDistanceToSubject = 0.00f;
    this->bThirdPersonCameraCollision = false;
    this->bShareLensSettings = false;
    this->bIgnoreJump = false;
}

