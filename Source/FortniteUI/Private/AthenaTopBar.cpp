#include "AthenaTopBar.h"


void UAthenaTopBar::HandleFeatureNavigateRequest(EFortUIFeature Feature) {
}

void UAthenaTopBar::HandleButtonGroupSelectionChanged(UCommonButton* SelectedButton, int32 ButtonIndex) {
}

void UAthenaTopBar::HandleActiveSeasonDataChanged(const TArray<FString>& ActiveEventFlags) {
}


UAthenaTopBar::UAthenaTopBar() {
    this->ButtonGroup_TopTabs = NULL;
    this->Notice_Emergency_Base = NULL;
    this->Button_Social = NULL;
    this->Button_MainMenu = NULL;
    this->Button_MTX = NULL;
    this->Text_MobileTabLabel = NULL;
    this->EntryBox_TabButtons = NULL;
    this->InputActionWidget_Next = NULL;
    this->InputActionWidget_Prev = NULL;
}

