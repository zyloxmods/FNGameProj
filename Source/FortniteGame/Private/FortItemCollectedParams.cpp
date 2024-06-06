#include "FortItemCollectedParams.h"

void UFortItemCollectedParams::SetParams(const UFortWorldItemDefinition* _CollectedItemDefinition, AFortPlayerController* _CollectedBy, int32 _AmountCollected, UFortItemCollectedParams*& ThisParam) {
}

void UFortItemCollectedParams::BreakParams(UFortWorldItemDefinition*& _CollectedItemDefinition, AFortPlayerController*& _CollectedBy, int32& _AmountCollected) {
}

UFortItemCollectedParams::UFortItemCollectedParams() {
    CollectedItemDefinition = NULL;
    CollectedBy = NULL;
    AmountCollected = 0;
}

