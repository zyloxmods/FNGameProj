#include "FortEulaTab.h"

void UFortEulaTab::HandleDownloadEULAComplete(bool bSuccessful, FText EULAText, const FString& Key) {
}

UFortEulaTab::UFortEulaTab() {
    this->Text_EULA = NULL;
    this->Switcher_TextSpinner = NULL;
    this->ScrollBox_EULAText = NULL;
    this->Image_Spinner = NULL;
}

