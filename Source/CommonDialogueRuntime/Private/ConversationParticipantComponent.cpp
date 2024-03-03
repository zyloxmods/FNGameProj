#include "ConversationParticipantComponent.h"

FText UConversationParticipantComponent::GetParticipantDisplayName() {
    return FText::GetEmpty();
}

void UConversationParticipantComponent::DEBUG_ServerAdvanceConversation_Implementation(FConversationNodeHandle PickedOption) {
}

void UConversationParticipantComponent::ClientUpdateConversation_Implementation(const FClientConversationMessagePayload& Message) {
}

void UConversationParticipantComponent::ClientExecuteTaskAndSideEffects_Implementation(FConversationNodeHandle Handle) {
}

void UConversationParticipantComponent::ClientConversationStarted_Implementation() {
}

void UConversationParticipantComponent::ClientConversationEnded_Implementation() {
}

UConversationParticipantComponent::UConversationParticipantComponent() {
    this->Auth_CurrentConversation = NULL;
}

