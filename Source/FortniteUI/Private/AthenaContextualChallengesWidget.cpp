#include "AthenaContextualChallengesWidget.h"

bool UAthenaContextualChallengesWidget::ShouldOutroAutomatically() const {
    return false;
}



void UAthenaContextualChallengesWidget::HandleToggleFullscreenMap(bool bFullscreenMapVisible) {
}

void UAthenaContextualChallengesWidget::HandleNewContextualObjectives(const TArray<UFortQuestItem*>& InContextualQuests) {
}

float UAthenaContextualChallengesWidget::GetOutroDelay() const {
    return 0.0f;
}

UAthenaContextualChallengesWidget::UAthenaContextualChallengesWidget() {
}

