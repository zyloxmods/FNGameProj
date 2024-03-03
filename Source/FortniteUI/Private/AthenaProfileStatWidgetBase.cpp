#include "AthenaProfileStatWidgetBase.h"

void UAthenaProfileStatWidgetBase::SetStatView(UAthenaBaseStatView* InStatView, bool RespectParentStatView) {
}

void UAthenaProfileStatWidgetBase::SetAsStat(const FGameplayTag& InStat) {
}


void UAthenaProfileStatWidgetBase::HandleStatViewChanged(UAthenaBaseStatView* StatView) {
}

TArray<FStatGroupData> UAthenaProfileStatWidgetBase::CreateWeaponGroupData(int32 MaxToReturn, bool bIncludeOtherCategory, bool bPercentages) {
    return TArray<FStatGroupData>();
}

UAthenaProfileStatWidgetBase::UAthenaProfileStatWidgetBase() {
    this->ProfileStatBox = NULL;
}

