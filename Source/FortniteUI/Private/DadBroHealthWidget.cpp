#include "DadBroHealthWidget.h"

void UDadBroHealthWidget::UpdateFinalBossBattle() {
}



void UDadBroHealthWidget::HandleMashPhaseChanged(int32 NewPhase) {
}

void UDadBroHealthWidget::HandleDadBroSpawned(AFortAIPawn* DadBroPawn) {
}

UDadBroHealthWidget::UDadBroHealthWidget() {
    this->DadBroMutator = NULL;
    this->BossHealthRatio = 1;
    this->BossAIPawn = NULL;
}

