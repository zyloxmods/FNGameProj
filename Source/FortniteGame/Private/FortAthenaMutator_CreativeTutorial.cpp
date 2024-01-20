#include "FortAthenaMutator_CreativeTutorial.h"

void AFortAthenaMutator_CreativeTutorial::StartTrackingEndSkydiving() {
}

void AFortAthenaMutator_CreativeTutorial::OnVolumeManagerReplicated() {
}

void AFortAthenaMutator_CreativeTutorial::OnPlayerJoinedCreativeIsland() {
}

void AFortAthenaMutator_CreativeTutorial::OnPlayerCreativeVolumeChanged(const AFortVolume* Volume) {
}

void AFortAthenaMutator_CreativeTutorial::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_CreativeTutorial::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortAthenaMutator_CreativeTutorial::OnEndSkydiving() {
}

void AFortAthenaMutator_CreativeTutorial::OnActorEnteredVolume(APlayerState* PS, AFortVolume* Volume) {
}

void AFortAthenaMutator_CreativeTutorial::DisplayBackToHubMessage() {
}

AFortAthenaMutator_CreativeTutorial::AFortAthenaMutator_CreativeTutorial() {
    this->bHasSeenInventoryTutorial = false;
    this->bHasSeenReturnToCreativeHubTutorial = false;
    this->bHasSeenMyIslandTutorial = false;
    this->bHasSeenWelcomeTutorial = false;
    this->bHasSeenPermissionsTutorial = false;
    this->bCanShowMyIslandMessage = false;
    this->ServerShutdownTimeRemaining = 0.00f;
}

