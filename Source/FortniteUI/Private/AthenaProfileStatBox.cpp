#include "AthenaProfileStatBox.h"

void UAthenaProfileStatBox::SetStatView(UAthenaBaseStatView* InStatView, bool RespectParentStatView) {
}

FFortUIStatStyle UAthenaProfileStatBox::GetStatStyle(const FGameplayTag& InStat) const {
    return FFortUIStatStyle{};
}

UAthenaBaseStatView* UAthenaProfileStatBox::GetBaseStatView() {
    return NULL;
}

UAthenaProfileStatBox::UAthenaProfileStatBox() {
    this->bRespectParentStatView = true;
    this->StatView = NULL;
}

