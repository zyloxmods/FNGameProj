#include "ConversationNode.h"

FLinearColor UConversationNode::GetDebugParticipantColor(FGameplayTag ParticipantID) const {
    return FLinearColor{};
}

UConversationNode::UConversationNode() {
    this->EvalWorldContextObj = NULL;
    this->ParentNode = NULL;
}

