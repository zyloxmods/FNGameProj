#pragma once
#include "CoreMinimal.h"
#include "AnnouncementConversationDelegateDelegate.h"
#include "FortClientAnnouncement.h"
#include "FortClientAnnouncementData_Conversation.h"
#include "FortClientAnnouncement_ConversationCodeInterface.h"
#include "FortClientAnnouncement_ConversationInterface.h"
#include "FortConversationSentence.h"
#include "FortClientAnnouncement_Conversation.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class AFortClientAnnouncement_Conversation : public AFortClientAnnouncement, public IFortClientAnnouncement_ConversationInterface, public IFortClientAnnouncement_ConversationCodeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortClientAnnouncementData_Conversation ConversationData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnnouncementConversationDelegate OnConversationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnnouncementConversationDelegate OnConversationStopped;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* SpeechComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlayConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentlyPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSentenceIndex;
    
public:
    AFortClientAnnouncement_Conversation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void CurrentSentenceAudioTimeout();
    
    UFUNCTION(BlueprintCallable)
    void CurrentSentenceAudioFinished();
    
    UFUNCTION(BlueprintCallable)
    void AssetLoadTimeout();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopConversation() override PURE_VIRTUAL(StopConversation,);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool PlayConversationFromSentenceIndex(int32 StartingSentenceIndex) override PURE_VIRTUAL(PlayConversationFromSentenceIndex, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool PlayConversationFromSentence(const FFortConversationSentence& StartingSentence) override PURE_VIRTUAL(PlayConversationFromSentence, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool PlayConversation() override PURE_VIRTUAL(PlayConversation, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsPlayingSentenceIndex(int32 SentenceIndex) const override PURE_VIRTUAL(IsPlayingSentenceIndex, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsPlayingSentence(const FFortConversationSentence& Sentence) const override PURE_VIRTUAL(IsPlayingSentence, return false;);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsPlayingConversation(bool bCheckAudioComponent) const override PURE_VIRTUAL(IsPlayingConversation, return false;);
    
};

