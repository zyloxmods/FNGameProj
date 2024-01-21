#include "FortSwipePanel.h"

void UFortSwipePanel::GetSwipeInfo(int32& OutIndex, FVector2D& OutSwipePercentage) const {
}

UFortSwipePanel::UFortSwipePanel() {
    this->bBeginSwipeOnPointerEnter = true;
    this->bConsumePointerInput = true;
}

