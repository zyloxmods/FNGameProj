#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortConversationSentence.h"
#include "FortConversation.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversation : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortConversationSentence> Sentences;
    
public:
    UFortConversation();
};

