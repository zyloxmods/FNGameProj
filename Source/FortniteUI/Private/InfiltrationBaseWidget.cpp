#include "InfiltrationBaseWidget.h"





bool UInfiltrationBaseWidget::IsLocalPlayerDefending() const {
    return false;
}

bool UInfiltrationBaseWidget::IsLocalPlayerAttacking() const {
    return false;
}

bool UInfiltrationBaseWidget::IsBeingHeldByLocalPlayer() const {
    return false;
}

int32 UInfiltrationBaseWidget::GetNumOfRounds() const {
    return 0;
}

bool UInfiltrationBaseWidget::GetIsCurrentlyDefended() const {
    return false;
}

float UInfiltrationBaseWidget::GetGroundTimeRemaining() const {
    return 0.0f;
}

uint8 UInfiltrationBaseWidget::GetDefendingTeam() const {
    return 0;
}

int32 UInfiltrationBaseWidget::GetCurrentRound() const {
    return 0;
}

EIntelStateEnum UInfiltrationBaseWidget::GetCurrentIntelState() const {
    return EIntelStateEnum::None;
}

uint8 UInfiltrationBaseWidget::GetAttackingTeam() const {
    return 0;
}

UInfiltrationBaseWidget::UInfiltrationBaseWidget() {
}

