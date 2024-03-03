#include "FortCameraBase.h"





void AFortCameraBase::Exhibit(AFortExhibitActor* TargetActor) {
}

AFortCameraBase::AFortCameraBase() {
    this->MinDistanceToDrag = 1;
    this->DefaultFieldOfView = 1;
    this->ExhibitActor = NULL;
    this->bExhibitActorChanged = false;
    this->CheckForDragBegin = false;
}

