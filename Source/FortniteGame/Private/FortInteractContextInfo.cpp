#include "FortInteractContextInfo.h"

bool UFortInteractContextInfo::HasValidContextOverride() const {
    return false;
}

UFortInteractContextInfo::UFortInteractContextInfo() {
    ContextOverrideWidget = NULL;
    ReceivingActor = NULL;
    InteractComponent = NULL;
    OptionalObjectData = NULL;
    LongInteractSound = NULL;
    OptionalHUDDisplayWidget = NULL;
    InteractionBeingAttempted = EInteractionBeingAttempted::FirstInteraction;
    RequiredDuration = 1;
    SecondRequiredDuration = 1;
    bShowCountDown = false;
    bShowFirstInteraction = true;
    bShowSecondInteraction = false;
    bIsSecondInteractionActive = false;
    bDisplayTextOnly = false;
    bSuppressInteractionWidget = false;
    bSuppressSimpleInteractionWidgetForTouch = true;
}

