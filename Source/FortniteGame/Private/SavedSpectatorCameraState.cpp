#include "SavedSpectatorCameraState.h"

FSavedSpectatorCameraState::FSavedSpectatorCameraState() {
    bDataIsValid = false;
    CameraType = ESpectatorCameraType::ThirdPerson;
    CurrentFocalLength = 1;
    CurrentAperture = 1;
    bAutoFocus = false;
    CurrentFocusDistance = 1;
    bAutoExposure = false;
    ManualExposureBias = 1;
    ThirdPersonNormalizedDistance = 1;
    ThirdPersonAutoFollowMode = EThirdPersonAutoFollowMode::Off;
    DroneSpeedIndex = 1;
    ReplayPlaybackSpeed = 1;
    bNamePlatesEnabled = false;
    bPlayerOutlinesEnabled = false;
    bThirdPersonCamCollide = false;
    bFollowDroneDoTest = false;
    bBattleMapIsOnTimelineMode = false;
}

