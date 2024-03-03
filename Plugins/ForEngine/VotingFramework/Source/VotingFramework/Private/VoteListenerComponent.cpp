#include "VoteListenerComponent.h"

void UVoteListenerComponent::OnVoteStart(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, EVoteState VoteState) {
}

void UVoteListenerComponent::OnVoteSetup(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, EVoteState VoteState) {
}

void UVoteListenerComponent::OnVoteSessionVoting(const FGameplayTag& VoteSessionId, const FGameplayTag& StartingVoteId, EVoteSessionState SessionState) {
}

void UVoteListenerComponent::OnVoteSessionShutdown(const FGameplayTag& VoteSessionId) {
}

void UVoteListenerComponent::OnVoteSessionSetup(const FGameplayTag& VoteSessionId, const FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState) {
}

void UVoteListenerComponent::OnVoteSessionComplete(const FGameplayTag& VoteSessionId) {
}

void UVoteListenerComponent::OnVoteEnd(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, const FGameplayTag& WinningVoteSelectionId, EVoteState VoteState) {
}

void UVoteListenerComponent::OnVoteChange(const FGameplayTag& VoteSessionId, const FGameplayTag& VoteId, const FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal) {
}

UVoteListenerComponent::UVoteListenerComponent() {
}

