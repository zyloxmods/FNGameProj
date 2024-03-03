#include "KairosSceneManagerActor.h"
#include "Components/AudioComponent.h"

void AKairosSceneManagerActor::StopAR() {
}

void AKairosSceneManagerActor::PauseOrResumeSnippet(const FString& PlayerId, bool bShouldPase) {
}


FKairosSceneInfo AKairosSceneManagerActor::GetSceneInfo() {
    return FKairosSceneInfo{};
}

void AKairosSceneManagerActor::BeginEmotePlaybackForPlayer(const FString& PlayerId, const FString& EmoteId) {
}

AKairosSceneManagerActor::AKairosSceneManagerActor() {
    this->SnippetAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SnippetAudioComponent"));
    this->ActiveGroupWidget = NULL;
    this->bIsSnippetPaused = false;
}

