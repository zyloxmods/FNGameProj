#include "FortResultsWidget.h"

void UFortResultsWidget::TriggerSetupTeleportCameraEvent() {
}

void UFortResultsWidget::SendEndOfRoundUpVoteAnalytic(const FUniqueNetIdRepl& TargetId, const FString& TargetPlayerName) {
}

void UFortResultsWidget::SendEndOfRoundScreenAnalytic(const FString& ScreenName, bool Skipped, float TimeSpent) {
}

void UFortResultsWidget::SendEndOfRoundFriendInviteAnalytic(const FUniqueNetIdRepl& TargetId, const FString& TargetPlayerName) {
}

void UFortResultsWidget::RequestExitZone() {
}

void UFortResultsWidget::LogXPData() {
}

bool UFortResultsWidget::IsDataFinalized() const {
    return false;
}

void UFortResultsWidget::HandlePickerCancel(bool& bPassThrough) {
}

void UFortResultsWidget::HandleEmoteClicked(bool& bPassThrough) {
}

FText UFortResultsWidget::GetZoneCompletionResultText() const {
    return FText::GetEmpty();
}

EFortCompletionResult UFortResultsWidget::GetZoneCompletionResult() const {
    return EFortCompletionResult::Win;
}

int32 UFortResultsWidget::GetTotalMissionPointsEarned() {
    return 0;
}

void UFortResultsWidget::GetRewardsByType(EFortRewardItemType Type, TArray<UFortItem*>& OutRewards) {
}

UFortResultsWidget::UFortResultsWidget() {
    this->AdditionalGrantedMissionPoints = 0;
    this->Radial_Picker = NULL;
}

