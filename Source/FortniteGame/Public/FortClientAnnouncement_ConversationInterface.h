#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortConversationSentence.h"
#include "FortClientAnnouncement_ConversationInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortClientAnnouncement_ConversationInterface : public UInterface {
    GENERATED_BODY()
};

class IFortClientAnnouncement_ConversationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    bool ShouldPlaySentence(const FFortConversationSentence& NewSentence) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSentenceStarted(const FFortConversationSentence& Sentence, int32 SentenceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnSentenceFinished(const FFortConversationSentence& Sentence, int32 SentenceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnConversationStarted(FFortConversationSentence StartingSentence, int32 StartingSentenceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnConversationFinished(FFortConversationSentence FinishingSentence, int32 FinishingSentenceSentenceIndex);
    
};

