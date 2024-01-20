#include "FortPlayerControllerPvP.h"

void AFortPlayerControllerPvP::ServerAttemptSelectFOBCore_Implementation(ABuildingFOBConfigActor* FOBToSelectOn, UFortFOBCoreDecoItemDefinition* DefToSelect) {
}
bool AFortPlayerControllerPvP::ServerAttemptSelectFOBCore_Validate(ABuildingFOBConfigActor* FOBToSelectOn, UFortFOBCoreDecoItemDefinition* DefToSelect) {
    return true;
}

void AFortPlayerControllerPvP::ClientShowGameOverWidget_Implementation(EFortPvPGameResult GameResult) {
}

void AFortPlayerControllerPvP::ClientReceiveKillNotification_Implementation(AFortPlayerStateZone* Killer, AFortPlayerStateZone* Killed) {
}

AFortPlayerControllerPvP::AFortPlayerControllerPvP() {
}

