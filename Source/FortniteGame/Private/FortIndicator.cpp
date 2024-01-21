#include "FortIndicator.h"

void UFortIndicator::OnParentActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UFortIndicator::UFortIndicator() {
    this->MaxDistance = 10000.00f;
    this->bMoveWithPawnState = false;
}

