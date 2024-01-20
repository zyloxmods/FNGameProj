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

void AFortPlayerControllerPvE::RequestIdleDetectionState(EFortIdleDetectionState NewIdleDetectionState) {
}

void AFortPlayerControllerPvE::RefreshHarvestingWeapon() {
}

void AFortPlayerControllerPvE::HandleQuickBarChanged(EFortQuickBars QuickBarType, const TArray<int32>& Slots) {
}

void AFortPlayerControllerPvE::ClientUpdateQuickBarRecordsCache_Implementation(const FQuickBar& PrimaryQuickBarRecord, const FQuickBar& SecondaryQuickBarRecord) {
}

void AFortPlayerControllerPvE::ClientSendKickMessage_Implementation(const FText& MESSAGE) {
}

AFortPlayerControllerPvE::AFortPlayerControllerPvE() {
}

