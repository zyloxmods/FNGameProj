#include "MashBossBattleWidget.h"

void UMashBossBattleWidget::UpdateFinalBossBattle() {
}



void UMashBossBattleWidget::HandleMashPhaseChanged(int32 NewPhase) {
}

UMashBossBattleWidget::UMashBossBattleWidget() {
    this->MashMutatorRef = NULL;
    this->CurrentBossHealth = 1;
    this->TotalBossHealth = 1;
    this->BossHealthRatio = 1;
    this->BossAIPawn = NULL;
}

