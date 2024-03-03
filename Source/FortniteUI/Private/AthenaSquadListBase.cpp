#include "AthenaSquadListBase.h"

void UAthenaSquadListBase::UpdateSquadFromMinigameOptionChange() {
}

void UAthenaSquadListBase::UpdateIsTeamMiniGameOnMinigameVolumeChanged(AFortVolume* Volume) {
}

void UAthenaSquadListBase::UpdateIsTeamMiniGameOnGameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState) {
}


void UAthenaSquadListBase::HandlePlayerUniqueIdReplicated(const FUniqueNetIdRepl& UniqueId) {
}

void UAthenaSquadListBase::HandlePlayerExitVolume(APlayerState* Client, AFortVolume* Volume) {
}

void UAthenaSquadListBase::HandlePlayerEnterVolume(APlayerState* Client, AFortVolume* Volume) {
}

void UAthenaSquadListBase::HandleGameMemberChanged(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS) {
}

UAthenaSquadListBase::UAthenaSquadListBase() {
    this->LocalPlayerVisibility = ESlateVisibility::Visible;
    this->LocalPlayerInfo = NULL;
    this->EntryBox_SquadList = NULL;
    this->CachedPlayerVM = NULL;
}

