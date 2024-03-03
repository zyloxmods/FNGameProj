#include "ConversationContextHelpers.h"

void UConversationContextHelpers::MakeConversationParticipant(const FConversationContext& Context, AActor* ParticipantActor, FGameplayTag ParticipantTag) {
}

FConversationNodeHandle UConversationContextHelpers::GetCurrentConversationNodeHandle(const FConversationContext& Context) {
    return FConversationNodeHandle{};
}

AActor* UConversationContextHelpers::GetConversationParticipantActor(const FConversationContext& Context, FGameplayTag ParticipantTag) {
    return NULL;
}

UConversationParticipantComponent* UConversationContextHelpers::GetConversationParticipant(const FConversationContext& Context, FGameplayTag ParticipantTag) {
    return NULL;
}

UConversationInstance* UConversationContextHelpers::GetConversationInstance(const FConversationContext& Context) {
    return NULL;
}

UConversationParticipantComponent* UConversationContextHelpers::FindConversationComponent(AActor* Actor) {
    return NULL;
}

void UConversationContextHelpers::DEBUG_ClientPrintConversation(const FConversationContext& Context, const FClientConversationMessagePayload& Message) {
}

void UConversationContextHelpers::AdvanceConversationWithChoice(const FConversationContext& Context, const FGuid& ChoiceID) {
}

void UConversationContextHelpers::AdvanceConversation(const FConversationContext& Context) {
}

UConversationContextHelpers::UConversationContextHelpers() {
}

