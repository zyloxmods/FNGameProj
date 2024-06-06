#include "FortAthenaTutorial_Shoot.h"

void AFortAthenaTutorial_Shoot::OnTargetDestroyed(int32 TargetIndex) {
}


AFortAthenaTutorial_Shoot::AFortAthenaTutorial_Shoot() {
    ShootCameraPoint = NULL;
    TargetCounterScreen = NULL;
    AmmoCountToTriggerReload = 0;
    ShootMarkerAppearDelay = 1;
    CameraInSpeed = 1;
    CameraInDuration = 1;
    CameraWaitTime = 1;
    CameraOutSpeed = 1;
    CameraOutDuration = 1;
}

