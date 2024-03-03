#include "AthenaXPBarWidget.h"



void UAthenaXPBarWidget::OnXPEvent(const FXPUIEvent& XPEvent) {
}

void UAthenaXPBarWidget::OnRegisteredWithQuestManager() {
}

void UAthenaXPBarWidget::OnLevelUp(int32 NewLevel) {
}

void UAthenaXPBarWidget::OnForwardedXPEvent(const FXPUIEvent& XPEvent) {
}


void UAthenaXPBarWidget::DoneUpdatingBar() {
}

UAthenaXPBarWidget::UAthenaXPBarWidget() {
    this->XpDisplayed = 0;
    this->XpWaitingToBeEarned = 0;
}

