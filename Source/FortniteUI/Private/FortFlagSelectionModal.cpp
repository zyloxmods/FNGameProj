#include "FortFlagSelectionModal.h"

UFortFlagSelectionModal::UFortFlagSelectionModal() {
    this->SelectedFlag = NULL;
    this->FlagConfirmSpinnerDelay = 1;
    this->Text_Confirmation = NULL;
    this->Text_CurrentFlagRegionName = NULL;
    this->CurrentFlagImage = NULL;
    this->ConfirmationCurrentFlagImage = NULL;
    this->ConfirmationTargetFlagImage = NULL;
    this->TileView_FlagOptions = NULL;
    this->Text_FlagRegionName = NULL;
    this->Text_ChangeRegionBlock = NULL;
    this->Button_Change = NULL;
    this->Button_ConfirmationCancel = NULL;
    this->Button_ConfirmationConfirm = NULL;
    this->Button_Cancel = NULL;
    this->Button_CloseMobile = NULL;
    this->Image_Spinner = NULL;
}

