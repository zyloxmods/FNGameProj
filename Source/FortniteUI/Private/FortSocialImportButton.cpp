#include "FortSocialImportButton.h"


void UFortSocialImportButton::HandleDynamicSocialImportDialogClosed() {
}

UFortSocialImportButton::UFortSocialImportButton() {
    this->ActivePanel = NULL;
    this->DesiredPanelType = ESocialImportPanelType::Athena;
    this->SocialImportPanelClass = NULL;
}

