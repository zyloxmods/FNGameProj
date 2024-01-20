#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortConversationSentence.h"
#include "FortClientAnnouncement_ConversationCodeInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortClientAnnouncement_ConversationCodeInterface : public UInterface {
    GENERATED_BODY()
};

class IFortClientAnnouncement_ConversationCodeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual void StopConversation() PURE_VIRTUAL(StopConversation,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool PlayConversationFromSentenceIndex(int32 StartingSentenceIndex) PURE_VIRTUAL(PlayConversationFromSentenceIndex, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool PlayConversationFromSentence(const FFortConversationSentence& StartingSentence) PURE_VIRTUAL(PlayConversationFromSentence, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool PlayConversation() PURE_VIRTUAL(PlayConversation, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool IsPlayingSentenceIndex(int32 SentenceIndex) const PURE_VIRTUAL(IsPlayingSentenceIndex, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool IsPlayingSentence(const FFortConversationSentence& Sentence) const PURE_VIRTUAL(IsPlayingSentence, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    virtual bool IsPlayingConversation(bool bCheckAudioComponent) const PURE_VIRTUAL(IsPlayingConversation, return false;);
    
};

