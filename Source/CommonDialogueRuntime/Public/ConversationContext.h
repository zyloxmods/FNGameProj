#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.generated.h"

class UConversationInstance;
class UConversationNode;

USTRUCT(BlueprintType)
struct COMMONDIALOGUERUNTIME_API FConversationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationInstance* ActiveConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationNode* TaskBeingConsidered;
    
    FConversationContext();
};

