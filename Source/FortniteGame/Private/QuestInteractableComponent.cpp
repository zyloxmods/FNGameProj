#include "QuestInteractableComponent.h"
#include "Net/UnrealNetwork.h"

void UQuestInteractableComponent::OnRep_Ready() {
}

void UQuestInteractableComponent::OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}

void UQuestInteractableComponent::OnDisplayDynamicQuestUpdate(const UFortQuestObjectiveInfo* QuestObjective, bool bDisplayStatusUpdate, bool bDisplayAnnouncementUpdate) {
}

void UQuestInteractableComponent::OnCalendarUpdated() {
}

UFortQuestManager* UQuestInteractableComponent::GetQuestManagerForActor(AActor* InActor) {
    return NULL;
}

TArray<FName> UQuestInteractableComponent::Editor_GetValidObjectives() const {
    return TArray<FName>();
}

void UQuestInteractableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UQuestInteractableComponent, bReady);
}

UQuestInteractableComponent::UQuestInteractableComponent() {
    QuestItemDefinition = NULL;
    bReady = false;
    bDestroyActorWhenUnavailable = true;
}

