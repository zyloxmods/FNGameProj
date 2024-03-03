#include "FortActivityDetailsView.h"

void UFortActivityDetailsView::HandlePrevPanelInput(bool& bPassThrough) {
}

void UFortActivityDetailsView::HandlePanelSelectionChanged(UCommonButton* SelectedButton, int32 ButtonIndex) {
}

void UFortActivityDetailsView::HandleNextPanelInput(bool& bPassThrough) {
}

UFortActivityDetailsView::UFortActivityDetailsView() {
    this->Text_ActivityName = NULL;
    this->Text_ActivityDescription = NULL;
    this->Button_Select = NULL;
    this->Button_Back = NULL;
    this->InputActionWidget_NextPanel = NULL;
    this->InputActionWidget_PrevPanel = NULL;
    this->EntryBox_PanelTabButtons = NULL;
    this->ButtonGroup_PanelTabButtons = NULL;
    this->Switcher_ActivityDetailsPanels = NULL;
    this->DetailsPanel_Play = NULL;
    this->DetailsPanel_Info = NULL;
    this->DetailsPanel_Knobs = NULL;
}

