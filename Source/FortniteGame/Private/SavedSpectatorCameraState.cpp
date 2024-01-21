#include "SavedSpectatorCameraState.h"

FSavedSpectatorCameraState::FSavedSpectatorCameraState() {
    this->bDataIsValid = false;
    this->CameraType = ESpectatorCameraType::ThirdPerson;
    this->CurrentFocalLength = 0.00f;
    this->CurrentAperture = 0.00f;
    this->bAutoFocus = false;
    this->CurrentFocusDistance = 0.00f;
    this->bAutoExposure = false;
    this->ManualExposureBias = 0.00f;
    this->ThirdPersonNormalizedDistance = 0.00f;
    this->ThirdPersonAutoFollowMode = EThirdPersonAutoFollowMode::Off;
    this->DroneSpeedIndex = 0.00f;
    this->ReplayPlaybackSpeed = 0.00f;
    this->bNamePlatesEnabled = false;
    this->bPlayerOutlinesEnabled = false;
    this->bThirdPersonCamCollide = false;
    this->bFollowDroneDoTest = false;
}

