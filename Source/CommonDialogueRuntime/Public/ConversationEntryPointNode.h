#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ConversationNodeWithLinks.h"
#include "ConversationEntryPointNode.generated.h"

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationEntryPointNode : public UConversationNodeWithLinks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntryTag;
    
    UConversationEntryPointNode();
};

