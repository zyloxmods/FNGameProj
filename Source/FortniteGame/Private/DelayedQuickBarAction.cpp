#include "DelayedQuickBarAction.h"

FDelayedQuickBarAction::FDelayedQuickBarAction() {
    ActionId = 0;
    Action = EFortDelayedQuickBarAction::Add;
    QuickBarType = EFortQuickBars::Primary;
    QuickBarSlot = 0;
    bForceExecution = false;
}

