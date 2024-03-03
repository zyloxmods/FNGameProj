#include "AthenaMapScreenContainer.h"

UAthenaMapPanel* UAthenaMapScreenContainer::GetMapPanel() const {
    return NULL;
}


UAthenaMapScreenContainer::UAthenaMapScreenContainer() {
    this->VisibilitySwitcher_Content = NULL;
    this->EntryBox_TabButtons = NULL;
    this->Text_TabTitle = NULL;
    this->Text_Season = NULL;
    this->MobileCloseButton = NULL;
    this->MapPanel = NULL;
}

