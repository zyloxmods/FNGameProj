#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConversationParticipants.h"
#include "ConversationInstance.generated.h"

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationInstance : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationParticipants Participants;
    
public:
    UConversationInstance();
};

