#include "FortAthenaTutorial_Scoping.h"

void AFortAthenaTutorial_Scoping::OnTargetDestroyed(int32 TargetIndex) {
}


AFortAthenaTutorial_Scoping::AFortAthenaTutorial_Scoping() {
    GunToEquipItemDef = NULL;
    ScopingCameraPoint = NULL;
    ScopingCameraInSpeed = 1;
    ScopingCameraOutSpeed = 1;
}

