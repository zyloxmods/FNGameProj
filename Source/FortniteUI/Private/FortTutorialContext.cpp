#include "FortTutorialContext.h"

void UFortTutorialContext::UpdateTutorialAnnouncement(FFortClientAnnouncementData_Tutorial AnnouncementData, bool bShow) {
}

void UFortTutorialContext::UnhideTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType) {
}

void UFortTutorialContext::UnhideAllTutorialCallouts() {
}

AFortClientAnnouncement* UFortTutorialContext::TryGetActivePrimaryAnnouncement() const {
    return NULL;
}

void UFortTutorialContext::TryClearingPendingQuest(UFortQuestItem* Quest) {
}

void UFortTutorialContext::StartTutorial(FName WidgetName, ETutorialType TutorialType) {
}

void UFortTutorialContext::SkipTutorial() {
}

bool UFortTutorialContext::ShouldPromptToSkipTutorial() const {
    return false;
}

void UFortTutorialContext::OnNewAnnouncementStartedOnClient(AFortClientAnnouncement* NewAnnouncement) {
}

bool UFortTutorialContext::IsTutorialCalloutVisible(FName WidgetName) {
    return false;
}

bool UFortTutorialContext::IsObjectiveNextTutorialObjective(UFortQuestItem* Quest, FName TutorialObjectiveName) {
    return false;
}

void UFortTutorialContext::HideTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType) {
}

bool UFortTutorialContext::GetTutorialData(const FName TutorialObjectiveName, FFortUITutorialData& OutTutorialData) const {
    return false;
}

void UFortTutorialContext::GetTutorialCallouts(TArray<FName>& WidgetNames) {
}

void UFortTutorialContext::GetHiddenTutorialCallouts(TArray<FName>& WidgetNames) {
}

void UFortTutorialContext::FinishTutorial(UFortQuestItem* Quest, FName WidgetName, ETutorialType TutorialType) {
}

void UFortTutorialContext::EnableTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType) {
}

void UFortTutorialContext::DisableTutorialCallout(FName WidgetName, FName TutorialQuestObjectiveName, ETutorialType TutorialType) {
}

void UFortTutorialContext::ContinueTutorial() {
}

void UFortTutorialContext::ClearTutorialCallouts() {
}

bool UFortTutorialContext::CanStartTutorial(UFortQuestItem* Quest, FName WidgetName, ETutorialType TutorialType) {
    return false;
}

UFortTutorialContext::UFortTutorialContext() {
}

