#include "FortComparisonResultIndicator.h"

void UFortComparisonResultIndicator::SetComparisonResult(EFortBuffState NewComparisonResult) {
}

UFortComparisonResultIndicator::UFortComparisonResultIndicator() {
    this->bShouldCollapseWhenNotShown = false;
    this->ComparisonResult = EFortBuffState::NoChange;
}

