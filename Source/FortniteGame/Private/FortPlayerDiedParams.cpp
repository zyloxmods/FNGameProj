#include "FortPlayerDiedParams.h"

void UFortPlayerDiedParams::SetParams(AFortPlayerPawn* _KilledPlayer, AController* _KilledPlayerController, AController* _KilledBy, UFortPlayerDiedParams*& ThisParam) {
}

void UFortPlayerDiedParams::BreakParams(AFortPlayerPawn*& _KilledPlayer, AController*& _KilledPlayerController, AController*& _KilledBy) {
}

UFortPlayerDiedParams::UFortPlayerDiedParams() {
    KilledPlayer = NULL;
    KilledPlayerController = NULL;
    KilledBy = NULL;
}

