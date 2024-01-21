#include "FeedbackReportPlayerBase.h"




void UFeedbackReportPlayerBase::HandleTabClicked(EPlayerReportingStep ClickedStep) {
}

void UFeedbackReportPlayerBase::HandleMessageChanged(const FText& Text) {
}

void UFeedbackReportPlayerBase::HandleBackAction() {
}

void UFeedbackReportPlayerBase::DynamicHandleReportReasonSelected(UObject* SelectedItem) {
}

void UFeedbackReportPlayerBase::DynamicHandlePlayerSelected(UObject* SelectedItem) {
}

void UFeedbackReportPlayerBase::CloseDialog() {
}

UFeedbackReportPlayerBase::UFeedbackReportPlayerBase() {
    this->SelectedPlayer = NULL;
    this->SelectedReportReason = NULL;
    this->OptionalReportReasonLength = 250;
    this->NumPlayerEntries = 0;
    this->Button_Cancel = NULL;
    this->Button_Send = NULL;
    this->TabButtonGroup = NULL;
    this->ListView_ReportablePlayers = NULL;
    this->ListView_ReportReasons = NULL;
    this->EditableText_ReasonField = NULL;
    this->MultiLineEditableText_ReasonField = NULL;
    this->Text_CharCount = NULL;
}

