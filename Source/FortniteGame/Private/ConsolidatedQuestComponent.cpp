#include "ConsolidatedQuestComponent.h"

void UConsolidatedQuestComponent::UpdateCompletedForPlayer(AFortPlayerController* InPlayerController, bool bCompleted) {
}

void UConsolidatedQuestComponent::OnQuestActivated(const UFortQuestItem* QuestItem, FName ObjectiveName) {
}

void UConsolidatedQuestComponent::OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}

void UConsolidatedQuestComponent::OnCalendarUpdated() {
}

bool UConsolidatedQuestComponent::IsInteractable(AFortPlayerController* InteractingController) {
    return false;
}

TArray<FName> UConsolidatedQuestComponent::Editor_GetValidObjectives() const {
    return TArray<FName>();
}

void UConsolidatedQuestComponent::DelayBeginPlay() {
}

UConsolidatedQuestComponent::UConsolidatedQuestComponent() {
    ComponentResponse = EQuestVisibilityResponse::Hide;
    UpdateType = EQuestUpdateType::ObjectiveCompleted;
    bIsInteractable = false;
}

