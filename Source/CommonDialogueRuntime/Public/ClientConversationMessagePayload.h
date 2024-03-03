#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ClientConversationOptionEntry.h"
#include "ConversationNodeHandle.h"
#include "ConversationParticipants.h"
#include "ClientConversationMessagePayload.generated.h"

USTRUCT(BlueprintType)
struct COMMONDIALOGUERUNTIME_API FClientConversationMessagePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationParticipants Participants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationNodeHandle CurrentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ParticipantDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClientConversationOptionEntry> Options;
    
    FClientConversationMessagePayload();
};

