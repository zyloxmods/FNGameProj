#include "FortCameraBase.h"





void AFortCameraBase::Exhibit(AFortExhibitActor* TargetActor) {
}

AFortCameraBase::AFortCameraBase() {
    MinDistanceToDrag = 1;
    DefaultFieldOfView = 1;
    ExhibitActor = NULL;
    bExhibitActorChanged = false;
    CheckForDragBegin = false;
}

