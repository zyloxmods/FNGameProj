#include "FortPlayerDBNOEnterParams.h"

void UFortPlayerDBNOEnterParams::SetParams(AFortPlayerPawn* _KilledPlayer, AController* _KilledBy, UFortPlayerDBNOEnterParams*& ThisParam) {
}

void UFortPlayerDBNOEnterParams::BreakParams(AFortPlayerPawn*& _KilledPlayer, AController*& _KilledBy) {
}

UFortPlayerDBNOEnterParams::UFortPlayerDBNOEnterParams() {
    KilledPlayer = NULL;
    KilledBy = NULL;
}

