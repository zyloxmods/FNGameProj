#include "FortMissionVoteHUDElementWidget.h"

void UFortMissionVoteHUDElementWidget::RegisterFailsafeForVoteType(EFortVoteType VoteType) {
}




bool UFortMissionVoteHUDElementWidget::IsMultiplayerVote(EFortVoteType VoteType) {
    return false;
}

bool UFortMissionVoteHUDElementWidget::HasLocalPlayerVoted(EFortVoteType VoteType) {
    return false;
}

void UFortMissionVoteHUDElementWidget::HandleMissionActivationVoteUpdate(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<FVoter>& Voters) {
}

void UFortMissionVoteHUDElementWidget::HandleDifficultyIncreaseVoteUpdate(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<FVoter>& Voters) {
}

int32 UFortMissionVoteHUDElementWidget::GetVoteTimeRemaining(EFortVoteType VoteType) {
    return 0;
}

UFortMissionVoteHUDElementWidget::UFortMissionVoteHUDElementWidget() {
}

