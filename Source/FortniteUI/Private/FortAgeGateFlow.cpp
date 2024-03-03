#include "FortAgeGateFlow.h"

void UFortAgeGateFlow::HandleGuardianEmailCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo) {
}

void UFortAgeGateFlow::HandleGuardianEmailChanged(const FText& InText) {
}

void UFortAgeGateFlow::HandleDateOfBirthYearChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UFortAgeGateFlow::HandleDateOfBirthMonthChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

void UFortAgeGateFlow::HandleDateOfBirthDayChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

UFortAgeGateFlow::UFortAgeGateFlow() {
    this->Switcher_AgeGateScreens = NULL;
    this->Content_AgeEntryScreen = NULL;
    this->Content_GuardianEmailEntryScreen = NULL;
    this->Content_GuardianConsentPendingScreen = NULL;
    this->ComboBox_Month = NULL;
    this->ComboBox_Day = NULL;
    this->ComboBox_Year = NULL;
    this->Button_AgeEntryContinue = NULL;
    this->Button_AgeEntryPrivacyPolicy = NULL;
    this->EditableText_GuardianEmailEntry = NULL;
    this->Text_InvalidEmail = NULL;
    this->Button_GuardianEmailEntryContinue = NULL;
    this->Button_GuardianEmailEntryPrivacyPolicy = NULL;
    this->Button_GuardianEmailReEntry = NULL;
    this->RichText_TimerWarningEmailEntry = NULL;
    this->RichText_TimerWarningConsentPending = NULL;
    this->Text_EmailEntryChallengeError = NULL;
    this->Text_AgeEntryChallengeError = NULL;
}

