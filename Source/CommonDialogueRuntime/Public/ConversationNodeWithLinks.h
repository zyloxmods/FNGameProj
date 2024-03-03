#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationNode.h"
#include "ConversationNodeWithLinks.generated.h"

UCLASS(Abstract, Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationNodeWithLinks : public UConversationNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> OutputConnections;
    
    UConversationNodeWithLinks();
};

