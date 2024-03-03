#pragma once
#include "CoreMinimal.h"
#include "ConversationParticipantEntry.h"
#include "ConversationParticipants.generated.h"

USTRUCT(BlueprintType)
struct COMMONDIALOGUERUNTIME_API FConversationParticipants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConversationParticipantEntry> List;
    
    FConversationParticipants();
};

