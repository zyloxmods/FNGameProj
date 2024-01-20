#include "FortAthenaTabsScreenBase.h"




void UFortAthenaTabsScreenBase::HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason) {
}

void UFortAthenaTabsScreenBase::HandleFeatureNavigateRequest(EFortUIFeature Feature) {
}

bool UFortAthenaTabsScreenBase::CanShowSeasonShopTab() const {
    return false;
}

bool UFortAthenaTabsScreenBase::CanShowPrototypeTab(FName TabNameID) const {
    return false;
}

UFortAthenaTabsScreenBase::UFortAthenaTabsScreenBase() {
    this->TopTabList = NULL;
}

