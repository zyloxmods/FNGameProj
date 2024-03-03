#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "ConversationSubNode.h"
#include "ConversationSideEffectNode.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationSideEffectNode : public UConversationSubNode {
    GENERATED_BODY()
public:
    UConversationSideEffectNode();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ServerCauseSideEffect(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClientCauseSideEffect(const FConversationContext& Context) const;
    
};

