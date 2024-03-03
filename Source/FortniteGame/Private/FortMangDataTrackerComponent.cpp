#include "FortMangDataTrackerComponent.h"
#include "Net/UnrealNetwork.h"

void UFortMangDataTrackerComponent::UpdateTurretAlertState(ABuildingGameplayActor* TurretToUpdate, EAlertLevel NewAlertLevel) {
}

void UFortMangDataTrackerComponent::UpdateCameraAlertState(ABuildingGameplayActor* CameraToUpdate, EAlertLevel NewAlertLevel) {
}

void UFortMangDataTrackerComponent::UnRegisterLocalPlayerController() {
}

void UFortMangDataTrackerComponent::RegisterTurretInfos(const TArray<FFortMangSentryInfo>& Turrets) {
}

void UFortMangDataTrackerComponent::RegisterMangControllers(TArray<AFortAthenaAIBotController*> MangControllers) {
}

void UFortMangDataTrackerComponent::RegisterLocalPlayerController(AFortPlayerController* LocalPlayerController) {
}

void UFortMangDataTrackerComponent::RegisterCameraInfos(const TArray<FFortMangSentryInfo>& Cameras) {
}

void UFortMangDataTrackerComponent::OnRep_BotInfos() {
}

void UFortMangDataTrackerComponent::OnBotPawnDBNOStatusChanged(AFortPawn* FortPawn, bool bIsDBNO) {
}

void UFortMangDataTrackerComponent::OnBotDied(AFortAthenaAIBotController* BotController, AFortPawn* FortPawn) {
}

void UFortMangDataTrackerComponent::OnBotDBNOStatusChanged(AFortAthenaAIBotController* BotController, bool bIsDBNO) {
}

void UFortMangDataTrackerComponent::OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel) {
}

bool UFortMangDataTrackerComponent::IsTrackingPerPlayer() const {
    return false;
}

void UFortMangDataTrackerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMangDataTrackerComponent, BotInfos);
}

UFortMangDataTrackerComponent::UFortMangDataTrackerComponent() {
}

