#include "FortItemDroppedParams.h"

void UFortItemDroppedParams::SetParams(const UFortWorldItemDefinition* _DroppedItemDefinition, AFortPlayerController* _DroppedBy, int32 _AmountCollected, UFortItemDroppedParams*& ThisParam) {
}

void UFortItemDroppedParams::BreakParams(UFortWorldItemDefinition*& _DroppedItemDefinition, AFortPlayerController*& _DroppedBy, int32& _AmountCollected) {
}

UFortItemDroppedParams::UFortItemDroppedParams() {
    this->DroppedItemDefinition = NULL;
    this->DroppedBy = NULL;
    this->AmountDropped = 0;
}

