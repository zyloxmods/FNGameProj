#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "ConversationSubNode.h"
#include "EConversationRequirementResult.h"
#include "ConversationRequirementNode.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationRequirementNode : public UConversationSubNode {
    GENERATED_BODY()
public:
    UConversationRequirementNode();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EConversationRequirementResult IsRequirementSatisfied(const FConversationContext& Context) const;
    
};

