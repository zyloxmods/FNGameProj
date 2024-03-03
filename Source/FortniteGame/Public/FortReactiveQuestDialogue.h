#pragma once
#include "CoreMinimal.h"
#include "FortReactiveQuestDialogue.generated.h"

class UFortConversation;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortReactiveQuestDialogue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortConversation* Conversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayOnObjectiveCount;
    
    FFortReactiveQuestDialogue();
};

