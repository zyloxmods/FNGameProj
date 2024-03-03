#include "LiveStreamLobbyAd.h"

ULiveStreamLobbyAd::ULiveStreamLobbyAd() : UUserWidget(FObjectInitializer::Get()) {
    this->ContentSwitcher = NULL;
    this->ButtonLayer = NULL;
    this->CountdownLayer = NULL;
    this->CountdownText = NULL;
}

