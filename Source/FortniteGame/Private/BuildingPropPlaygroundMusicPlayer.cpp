#include "BuildingPropPlaygroundMusicPlayer.h"
#include "FortGameplayReceiverMessageComponent.h"
#include "FortMinigameLogicComponent.h"

void ABuildingPropPlaygroundMusicPlayer::StopReceiver(AController* TriggerInstigator) {
}

void ABuildingPropPlaygroundMusicPlayer::Stop() {
}

void ABuildingPropPlaygroundMusicPlayer::PlayReceiver(AController* TriggerInstigator) {
}

void ABuildingPropPlaygroundMusicPlayer::Play() {
}

void ABuildingPropPlaygroundMusicPlayer::OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

void ABuildingPropPlaygroundMusicPlayer::ConditionallyLoadSongBasedOnMinigameState() {
}

ABuildingPropPlaygroundMusicPlayer::ABuildingPropPlaygroundMusicPlayer() {
    this->MinigameLogicComponent = CreateDefaultSubobject<UFortMinigameLogicComponent>(TEXT("MinigameLogicComponent"));
    this->PlayReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("PlayReceiverComponent"));
    this->StopReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("StopReceiverComponent"));
    this->PlayDuringPregame = 0;
    this->PlayDuringWarmup = 0;
    this->PlayDuringGameplay = 0;
    this->PlayDuringRoundEnd = 0;
    this->PlayDuringGameEnd = 0;
}

