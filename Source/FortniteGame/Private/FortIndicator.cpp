#include "FortIndicator.h"

void UFortIndicator::OnParentActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UFortIndicator::UFortIndicator() {
    this->MaxDistance = 1;
    this->bMoveWithPawnState = false;
}

