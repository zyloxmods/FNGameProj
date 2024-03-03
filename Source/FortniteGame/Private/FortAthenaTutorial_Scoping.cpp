#include "FortAthenaTutorial_Scoping.h"

void AFortAthenaTutorial_Scoping::OnTargetDestroyed(int32 TargetIndex) {
}


AFortAthenaTutorial_Scoping::AFortAthenaTutorial_Scoping() {
    this->GunToEquipItemDef = NULL;
    this->ScopingCameraPoint = NULL;
    this->ScopingCameraInSpeed = 1;
    this->ScopingCameraOutSpeed = 1;
}

