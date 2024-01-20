#include "FortClientAnnouncement_Conversation.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"

void AFortClientAnnouncement_Conversation::CurrentSentenceAudioFinished() {
}

void AFortClientAnnouncement_Conversation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortClientAnnouncement_Conversation, ConversationData);
}

AFortClientAnnouncement_Conversation::AFortClientAnnouncement_Conversation() {
    this->SpeechComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SpeechComponent_0"));
    this->bAutoPlayConversation = true;
    this->bCurrentlyPlaying = false;
    this->CurrentSentenceIndex = -1;
}

