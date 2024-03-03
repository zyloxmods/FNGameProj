#include "FortFriendSubscriptionToastWidget.h"

void UFortFriendSubscriptionToastWidget::HandleOpenCloseAnimationFinished() {
}

void UFortFriendSubscriptionToastWidget::HandleGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void UFortFriendSubscriptionToastWidget::HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget) {
}

UFortFriendSubscriptionToastWidget::UFortFriendSubscriptionToastWidget() {
    this->Anim_SimplePopup = NULL;
    this->DisplayTime = 1;
    this->HoldDuration = 1;
    this->DebounceHours = 0;
    this->Text_Nudge = NULL;
    this->Button_Cursor = NULL;
    this->Button_Hold = NULL;
    this->Switcher_InputButtons = NULL;
    this->Action_HoldKeybindWidget = NULL;
}

