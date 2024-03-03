#include "ConversationRequirementNode.h"

EConversationRequirementResult UConversationRequirementNode::IsRequirementSatisfied_Implementation(const FConversationContext& Context) const {
    return EConversationRequirementResult::Passed;
}

UConversationRequirementNode::UConversationRequirementNode() {
}

