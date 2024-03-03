#include "InfiltrationRoundInfoWidget.h"
#include "InfiltrationRoundInfoMutatorInterface.h"

bool UInfiltrationRoundInfoWidget::ShouldSkipWinLossScreen() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::ShouldPlayRoundEndStinger() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::ShouldPlayFactionIntro() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::ShouldModifyAttackingDefendingText(FText& OutAttackingDefendingText, bool bLocalTeamIsAttackers) const {
    return false;
}

void UInfiltrationRoundInfoWidget::SetWinningTeam(uint8 NewWinningTeam) {
}



bool UInfiltrationRoundInfoWidget::IsLocalPlayerDefendingNextRound() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::IsLocalPlayerDefending() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::IsLocalPlayerAttackingNextRound() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::IsLocalPlayerAttacking() const {
    return false;
}

bool UInfiltrationRoundInfoWidget::HasWinningTeam() const {
    return false;
}

uint8 UInfiltrationRoundInfoWidget::GetViewingTeam() const {
    return 0;
}

void UInfiltrationRoundInfoWidget::GetRoundResultsText(FText& OutResultsText, bool bLocalTeamIsAttackers, bool bLocalTeamIsWinners) const {
}

USoundBase* UInfiltrationRoundInfoWidget::GetRoundIntroFactionSound(bool bLocalTeamIsAttackers) const {
    return NULL;
}

int32 UInfiltrationRoundInfoWidget::GetFirstRound() const {
    return 0;
}

uint8 UInfiltrationRoundInfoWidget::GetDefendingTeam() const {
    return 0;
}

uint8 UInfiltrationRoundInfoWidget::GetAttackingTeam() const {
    return 0;
}

UInfiltrationRoundInfoWidget::UInfiltrationRoundInfoWidget() {
    this->CachedRoundIndex = 0;
    this->WinningTeam = 0;
    this->AttackingTeam = 0;
    this->DefendingTeam = 0;
    this->NextRoundAttackingTeam = 0;
    this->NextRoundDefendingTeam = 0;
    this->MutatorClassToWaitFor = UInfiltrationRoundInfoMutatorInterface::StaticClass();
}

