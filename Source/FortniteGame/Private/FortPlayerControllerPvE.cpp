#include "FortPlayerControllerPvE.h"

void AFortPlayerControllerPvE::ServerUpdateQuickBarRecordsCache_Implementation(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord) {
}
bool AFortPlayerControllerPvE::ServerUpdateQuickBarRecordsCache_Validate(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord) {
    return true;
}

void AFortPlayerControllerPvE::ServerTriggerSetupTeleportCameraEvent_Implementation() {
}
bool AFortPlayerControllerPvE::ServerTriggerSetupTeleportCameraEvent_Validate() {
    return true;
}

void AFortPlayerControllerPvE::ResetPlayerDeathReportForForcePlayerRestart() {
}

void AFortPlayerControllerPvE::RequestIdleDetectionState(EFortIdleDetectionState NewIdleDetectionState, const FString& Reason) {
}

void AFortPlayerControllerPvE::RefreshHarvestingWeapon() {
}

void AFortPlayerControllerPvE::HandleQuickBarChanged(EFortQuickBars QuickBarType, const TArray<int32>& Slots) {
}

void AFortPlayerControllerPvE::ClientUpdateQuickBarRecordsCache_Implementation(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord) {
}

void AFortPlayerControllerPvE::ClientShowIdleWarning_Implementation(float TimeUntilKick) {
}

void AFortPlayerControllerPvE::ClientHideIdleWarning_Implementation() {
}

AFortPlayerControllerPvE::AFortPlayerControllerPvE() {
    bForceAutoSlotWeaponsAtStart = false;
    bRecycleBrokenWeapons = false;
    IdleWarningAnnouncement = NULL;
    IdleKickEstimatedTime = 1;
}

