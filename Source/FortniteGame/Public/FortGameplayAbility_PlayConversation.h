#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_PlayConversation.generated.h"

class UFortConversation;

UCLASS(Blueprintable)
class UFortGameplayAbility_PlayConversation : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortConversation* ConversationToPlay;
    
public:
    UFortGameplayAbility_PlayConversation();
};

