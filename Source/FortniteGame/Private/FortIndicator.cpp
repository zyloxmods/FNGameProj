#include "FortIndicator.h"

void UFortIndicator::OnParentActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

UFortIndicator::UFortIndicator() {
    MaxDistance = 1;
    bMoveWithPawnState = false;
}

