#include "FortCameraBase.h"





void AFortCameraBase::Exhibit(AFortExhibitActor* TargetActor) {
}

AFortCameraBase::AFortCameraBase() {
    this->MinDistanceToDrag = 0.00f;
    this->DefaultFieldOfView = 90.00f;
    this->ExhibitActor = NULL;
    this->bExhibitActorChanged = false;
    this->CheckForDragBegin = false;
}

