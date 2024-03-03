#include "FortSocialPanel.h"

void UFortSocialPanel::OnClosePanelInternal(bool& PassThrough) {
}

bool UFortSocialPanel::IsAnySlideOutMenuOpen() const {
    return false;
}

void UFortSocialPanel::HandleSocialPanelClose() {
}


UFortSocialPanel::UFortSocialPanel() {
    this->PanelView_UserLists = NULL;
}

