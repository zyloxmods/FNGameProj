#include "FortInteractContextInfo.h"

bool UFortInteractContextInfo::HasValidContextOverride() const {
    return false;
}

UFortInteractContextInfo::UFortInteractContextInfo() {
    this->ContextOverrideWidget = NULL;
    this->ReceivingActor = NULL;
    this->InteractComponent = NULL;
    this->OptionalObjectData = NULL;
    this->LongInteractSound = NULL;
    this->OptionalHUDDisplayWidget = NULL;
    this->InteractionBeingAttempted = EInteractionBeingAttempted::FirstInteraction;
    this->RequiredDuration = 1;
    this->SecondRequiredDuration = 1;
    this->bShowCountDown = false;
    this->bShowFirstInteraction = true;
    this->bShowSecondInteraction = false;
    this->bIsSecondInteractionActive = false;
    this->bDisplayTextOnly = false;
    this->bSuppressInteractionWidget = false;
    this->bSuppressSimpleInteractionWidgetForTouch = true;
}

