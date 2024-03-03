#include "ConversationTaskNode.h"

EConversationRequirementResult UConversationTaskNode::IsRequirementSatisfied_Implementation(const FConversationContext& Context) const {
    return EConversationRequirementResult::Passed;
}

bool UConversationTaskNode::GetNodeBodyColor_Implementation(FLinearColor& BodyColor) const {
    return false;
}

TArray<FClientConversationOptionEntry> UConversationTaskNode::GetChoiceList(const FConversationContext& Context) const {
    return TArray<FClientConversationOptionEntry>();
}

EConversationTaskResult UConversationTaskNode::ExecuteTaskNode_Implementation(const FConversationContext& Context) const {
    return EConversationTaskResult::Success;
}

UConversationTaskNode::UConversationTaskNode() {
    this->bHasRequirements = false;
}

