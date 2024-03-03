#include "FortPlayerFeedbackModal.h"

UFortPlayerFeedbackModal::UFortPlayerFeedbackModal() {
    this->CategoryTabs = NULL;
    this->PlayerFeedbackCategoriesToAdd.AddDefaulted(1);
    this->PlayerFeedbackCategoriesToModify.AddDefaulted(1);
    this->Subscreen_CategoryDisplay = NULL;
    this->Subscreen_PlayerSelect = NULL;
    this->Subscreen_SubmitDisplay = NULL;
    this->Subscreen_FreeText = NULL;
    this->Subscreen_EpicQA = NULL;
    this->Subscreen_Screenshot = NULL;
    this->SubscreenTabs = NULL;
    this->SubscreenContainer = NULL;
    this->Text_ModalTitle = NULL;
    this->Button_Close = NULL;
    this->CloseButton = NULL;
    this->Button_NewFeedbackReport = NULL;
    this->Button_Back = NULL;
}

