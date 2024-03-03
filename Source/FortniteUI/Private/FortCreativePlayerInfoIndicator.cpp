#include "FortCreativePlayerInfoIndicator.h"

void UFortCreativePlayerInfoIndicator::HandlePlayerExitedVolume(APlayerState* Client, AFortVolume* Volume) {
}

void UFortCreativePlayerInfoIndicator::HandlePlayerEnteredVolume(APlayerState* Client, AFortVolume* Volume) {
}

void UFortCreativePlayerInfoIndicator::HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState) {
}

void UFortCreativePlayerInfoIndicator::HandleIndicatorRulesChanged(EPlayerIndicatorDisplayMode DisplayMode) {
}

void UFortCreativePlayerInfoIndicator::HandleHitPointsChanged(AFortPlayerState* PlayerState, float Health, float HealthMax, float Shield, float ShieldMax) {
}

UFortCreativePlayerInfoIndicator::UFortCreativePlayerInfoIndicator() {
    this->ValidMinigameTypesToShowIndicator.AddDefaulted(2);
    this->bKeepTargetUntilNewValidTarget = false;
    this->Image_HealthBar = NULL;
    this->Image_ShieldBar = NULL;
    this->Image_DBNOBar = NULL;
    this->TrackedPlayerState = NULL;
}

