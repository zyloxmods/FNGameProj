#include "FortItemCollectedParams.h"

void UFortItemCollectedParams::SetParams(const UFortWorldItemDefinition* _CollectedItemDefinition, AFortPlayerController* _CollectedBy, int32 _AmountCollected, UFortItemCollectedParams*& ThisParam) {
}

void UFortItemCollectedParams::BreakParams(UFortWorldItemDefinition*& _CollectedItemDefinition, AFortPlayerController*& _CollectedBy, int32& _AmountCollected) {
}

UFortItemCollectedParams::UFortItemCollectedParams() {
    this->CollectedItemDefinition = NULL;
    this->CollectedBy = NULL;
    this->AmountCollected = 0;
}

