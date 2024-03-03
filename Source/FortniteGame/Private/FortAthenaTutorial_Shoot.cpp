#include "FortAthenaTutorial_Shoot.h"

void AFortAthenaTutorial_Shoot::OnTargetDestroyed(int32 TargetIndex) {
}


AFortAthenaTutorial_Shoot::AFortAthenaTutorial_Shoot() {
    this->ShootCameraPoint = NULL;
    this->TargetCounterScreen = NULL;
    this->AmmoCountToTriggerReload = 0;
    this->ShootMarkerAppearDelay = 1;
    this->CameraInSpeed = 1;
    this->CameraInDuration = 1;
    this->CameraWaitTime = 1;
    this->CameraOutSpeed = 1;
    this->CameraOutDuration = 1;
}

