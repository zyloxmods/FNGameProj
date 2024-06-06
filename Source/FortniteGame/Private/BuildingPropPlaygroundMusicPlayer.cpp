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
    MinigameLogicComponent = CreateDefaultSubobject<UFortMinigameLogicComponent>(TEXT("MinigameLogicComponent"));
    PlayReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("PlayReceiverComponent"));
    StopReceiverComponent = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("StopReceiverComponent"));
    PlayDuringPregame = 0;
    PlayDuringWarmup = 0;
    PlayDuringGameplay = 0;
    PlayDuringRoundEnd = 0;
    PlayDuringGameEnd = 0;
}

