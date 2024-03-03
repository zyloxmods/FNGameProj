#include "SavedSpectatorCameraState.h"

FSavedSpectatorCameraState::FSavedSpectatorCameraState() {
    this->bDataIsValid = false;
    this->CameraType = ESpectatorCameraType::ThirdPerson;
    this->CurrentFocalLength = 1;
    this->CurrentAperture = 1;
    this->bAutoFocus = false;
    this->CurrentFocusDistance = 1;
    this->bAutoExposure = false;
    this->ManualExposureBias = 1;
    this->ThirdPersonNormalizedDistance = 1;
    this->ThirdPersonAutoFollowMode = EThirdPersonAutoFollowMode::Off;
    this->DroneSpeedIndex = 1;
    this->ReplayPlaybackSpeed = 1;
    this->bNamePlatesEnabled = false;
    this->bPlayerOutlinesEnabled = false;
    this->bThirdPersonCamCollide = false;
    this->bFollowDroneDoTest = false;
    this->bBattleMapIsOnTimelineMode = false;
}

