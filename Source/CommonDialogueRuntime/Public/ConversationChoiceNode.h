#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "ConversationSubNode.h"
#include "ConversationChoiceNode.generated.h"

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationChoiceNode : public UConversationSubNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultChoiceDisplayText;
    
    UConversationChoiceNode();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EvaluateChoice(const FConversationContext& Context, FText& DisplayOption) const;
    
};

