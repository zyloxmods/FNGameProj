#include "FortPlayerDiedParams.h"

void UFortPlayerDiedParams::SetParams(AFortPlayerPawn* _KilledPlayer, AController* _KilledPlayerController, AController* _KilledBy, UFortPlayerDiedParams*& ThisParam) {
}

void UFortPlayerDiedParams::BreakParams(AFortPlayerPawn*& _KilledPlayer, AController*& _KilledPlayerController, AController*& _KilledBy) {
}

UFortPlayerDiedParams::UFortPlayerDiedParams() {
    this->KilledPlayer = NULL;
    this->KilledPlayerController = NULL;
    this->KilledBy = NULL;
}

