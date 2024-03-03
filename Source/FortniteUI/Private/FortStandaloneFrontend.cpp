#include "FortStandaloneFrontend.h"

void UFortStandaloneFrontend::TriggerIncrementalGC() {
}




void UFortStandaloneFrontend::HandleTabSelected(FName TabNameID) {
}

void UFortStandaloneFrontend::HandleCloseRefreshComplete(AFortPlayerPawn* FortPawn) {
}

UFortStandaloneFrontend::UFortStandaloneFrontend() {
    this->bCosmeticRefreshOnClose = false;
    this->PocketLevel = NULL;
    this->PocketLevelInstance = NULL;
    this->Switcher_TabContent = NULL;
    this->Content_LoadingIndicator = NULL;
    this->OptionalTabList_MainContent = NULL;
    this->Button_CloseMobile = NULL;
}

