#include "FortClientAnnouncement_Conversation.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement_Conversation::CurrentSentenceAudioTimeout() {
}

void AFortClientAnnouncement_Conversation::CurrentSentenceAudioFinished() {
}

void AFortClientAnnouncement_Conversation::AssetLoadTimeout() {
}

void AFortClientAnnouncement_Conversation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_Conversation, ConversationData);
}

AFortClientAnnouncement_Conversation::AFortClientAnnouncement_Conversation() {
    SpeechComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SpeechComponent_0"));
    bAutoPlayConversation = true;
    bCurrentlyPlaying = false;
    CurrentSentenceIndex = 0;
}

