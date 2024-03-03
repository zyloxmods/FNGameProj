#include "AthenaMapNavigableIconStackOfChallenges.h"

bool UAthenaMapNavigableIconStackOfChallenges::ShouldCycleAutomatically() const {
    return false;
}

void UAthenaMapNavigableIconStackOfChallenges::SelectStackedDataAt(int32 InSelectedStackedDataIndex) {
}


int32 UAthenaMapNavigableIconStackOfChallenges::GetStackedDataCount() const {
    return 0;
}

int32 UAthenaMapNavigableIconStackOfChallenges::GetSelectStackedDataIndex() const {
    return 0;
}

void UAthenaMapNavigableIconStackOfChallenges::CycleStackedData() {
}

UAthenaMapNavigableIconStackOfChallenges::UAthenaMapNavigableIconStackOfChallenges() {
    this->CommonActionWidget_Cycle = NULL;
}

