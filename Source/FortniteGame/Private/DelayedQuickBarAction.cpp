#include "DelayedQuickBarAction.h"

FDelayedQuickBarAction::FDelayedQuickBarAction() {
    this->ActionId = 0;
    this->Action = EFortDelayedQuickBarAction::Add;
    this->QuickBarType = EFortQuickBars::Primary;
    this->QuickBarSlot = 0;
    this->bForceExecution = false;
}

