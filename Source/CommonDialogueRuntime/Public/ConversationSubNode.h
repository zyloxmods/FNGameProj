#pragma once
#include "CoreMinimal.h"
#include "ConversationNode.h"
#include "ConversationSubNode.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationSubNode : public UConversationNode {
    GENERATED_BODY()
public:
    UConversationSubNode();
};

