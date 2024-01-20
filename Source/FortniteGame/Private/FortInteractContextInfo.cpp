#include "FortInteractContextInfo.h"

UFortInteractContextInfo::UFortInteractContextInfo() {
    this->ReceivingActor = NULL;
    this->InteractComponent = NULL;
    this->OptionalObjectData = NULL;
    this->LongInteractSound = NULL;
    this->RequiredDuration = 0.00f;
    this->bShowCountDown = false;
    this->bDisplayTextOnly = false;
    this->bSuppressInteractionWidget = false;
    this->bSuppressSimpleInteractionWidgetForTouch = true;
}

