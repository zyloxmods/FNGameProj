#include "FortControllerComponent_MinigameActivity.h"

UFortControllerComponent_MinigameActivity* UFortControllerComponent_MinigameActivity::GetMinigameActivityComponent(const APawn* Pawn, EMinigameActivityComponentValidityResult& OutIsValid) {
    return NULL;
}

void UFortControllerComponent_MinigameActivity::ForwardMinigameActivityStatChanged(EMinigameActivityStat Stat, float Value) {
}

void UFortControllerComponent_MinigameActivity::ForwardMinigameActivityStarted(const FMinigameActivityStartedData& StartData) {
}

void UFortControllerComponent_MinigameActivity::ForwardMinigameActivityScoreChanged(int32 CurrentScore, int32 TotalScore) {
}

void UFortControllerComponent_MinigameActivity::ForwardMinigameActivityRankChanged(int32 Rank) {
}

void UFortControllerComponent_MinigameActivity::ForwardMinigameActivityEnded(const FMinigameActivityEndedData& EndData) {
}

UFortControllerComponent_MinigameActivity::UFortControllerComponent_MinigameActivity() {
}

