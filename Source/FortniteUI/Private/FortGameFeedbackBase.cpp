#include "FortGameFeedbackBase.h"

void UFortGameFeedbackBase::SubmitFeedback() {
}


void UFortGameFeedbackBase::OnFeedbackTypeSelected(UCommonButton* SelectedButton, int32 ButtonIndex) {
}


void UFortGameFeedbackBase::InitiateDebugInfoForFeedback() {
}

ESlateVisibility UFortGameFeedbackBase::GetButtonVisibilityByUIFeedbackType(EFortUIGameFeedbackType UIFeedbackType) {
    return ESlateVisibility::Visible;
}

void UFortGameFeedbackBase::CancelFeedback() {
}

void UFortGameFeedbackBase::AddButtonWithFeedbackType(UCommonButton* Button, EFortUIGameFeedbackType UIFeedbackType) {
}

UFortGameFeedbackBase::UFortGameFeedbackBase() {
    this->SubjectEditable = NULL;
    this->BodyEditable = NULL;
    this->BodyEditable_SingleLine = NULL;
    this->ButtonGroup = NULL;
    this->bDisableGameFeedbackAttachments = false;
}

