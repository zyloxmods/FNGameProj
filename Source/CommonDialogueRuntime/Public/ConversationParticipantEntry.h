#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ConversationParticipantEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct COMMONDIALOGUERUNTIME_API FConversationParticipantEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ParticipantID;
    
    FConversationParticipantEntry();
};

