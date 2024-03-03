#include "FortMissionActivationInfo.h"

FText UFortMissionActivationInfo::TimeSecondsToText(float InSeconds) const {
    return FText::GetEmpty();
}

void UFortMissionActivationInfo::SubmitVote(EFortVoteType VoteType, bool bApprove) {
}

void UFortMissionActivationInfo::RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType) {
}

bool UFortMissionActivationInfo::IsVoteLocked(EFortVoteType VoteType) const {
    return false;
}

bool UFortMissionActivationInfo::IsVoteActive(EFortVoteType VoteType) const {
    return false;
}

bool UFortMissionActivationInfo::IsPlayerVoteInstigator(EFortVoteType VoteType) const {
    return false;
}

bool UFortMissionActivationInfo::IsAnyVoteActive() const {
    return false;
}

bool UFortMissionActivationInfo::HasPlayerVoted(EFortVoteType VoteType) {
    return false;
}

void UFortMissionActivationInfo::HandleTeamMemberRemoved(int32 RemovedIndex) {
}

void UFortMissionActivationInfo::HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo) {
}

void UFortMissionActivationInfo::HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32 VoteResult, const TArray<FVoter>& Voters) {
}

float UFortMissionActivationInfo::GetVoteTimeRemaining(EFortVoteType VoteType) const {
    return 0.0f;
}

TArray<FVoter> UFortMissionActivationInfo::GetVoters(EFortVoteType VoteType) {
    return TArray<FVoter>();
}

void UFortMissionActivationInfo::GetVoteCounts(EFortVoteType VoteType, int32& OutYesVoteCount, int32& OutNoVoteCount) {
}

int32 UFortMissionActivationInfo::GetStartObjectiveBluGloRequirement() const {
    return 0;
}

UFortMissionInfo* UFortMissionActivationInfo::GetPrimaryMissionInfo() const {
    return NULL;
}

AFortMission* UFortMissionActivationInfo::GetPrimaryMission() const {
    return NULL;
}

EFortVoteType UFortMissionActivationInfo::GetMissionVoteType() const {
    return EFortVoteType::SurvivalVote;
}

float UFortMissionActivationInfo::GetMissionObjectiveTimeRemaining() const {
    return 0.0f;
}

FText UFortMissionActivationInfo::GetLockoutTimeRemaining(EFortVoteType VoteType) const {
    return FText::GetEmpty();
}

FUniqueNetIdRepl UFortMissionActivationInfo::GetInstigatorId(EFortVoteType VoteType) const {
    return FUniqueNetIdRepl{};
}

int32 UFortMissionActivationInfo::GetIncreaseDifficultyBluGloRequirement() const {
    return 0;
}

void UFortMissionActivationInfo::GetDeltaRewards(int32 BaseDifficultyIncreaseTier, int32 ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& DeltaRewards) const {
}

int32 UFortMissionActivationInfo::GetAvailableBluGloCount() const {
    return 0;
}

EFortVoteArbitratorType UFortMissionActivationInfo::GetArbitratorType(EFortVoteType VoteType) {
    return EFortVoteArbitratorType::Invalid;
}

bool UFortMissionActivationInfo::DoesPrimaryMissionContainTags(const FGameplayTagContainer& Tags) const {
    return false;
}

bool UFortMissionActivationInfo::CanRequestVote(EFortVoteType VoteType) const {
    return false;
}

UFortMissionActivationInfo::UFortMissionActivationInfo() {
    this->bIsMultiplayer = false;
    this->FortPC = NULL;
    this->GameStateZone = NULL;
    this->DifficultyIncreaseBluGloCurve = NULL;
}

