#include "FortAthenaAIBotController.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaAIBotController::OnTargetPawnDestroyed() {
}

void AFortAthenaAIBotController::OnTargetPawnDead(AFortPawn* FortPawn) {
}

void AFortAthenaAIBotController::OnTargetBuildingDestroyed(ABuildingActor* Building, AAthenaAIController* AIController) {
}

void AFortAthenaAIBotController::OnPerceptionSensed(AActor* SourceActor, FAIStimulus Stim) {
}

void AFortAthenaAIBotController::OnAgentDBNO(AFortPawn* InPlayer, bool bInIsDBNO) {
}

void AFortAthenaAIBotController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaAIBotController, Inventory);
}

AFortAthenaAIBotController::AFortAthenaAIBotController() {
    this->BehaviorTree = NULL;
    this->PlayerBotPawn = NULL;
    this->CachedBotManager = NULL;
    this->CachedGameMode = NULL;
    this->CachedBotMutator = NULL;
    this->CurrentAlertLevel = EAlertLevel::Unaware;
    this->VisualStimStrengthThresholdToBecomeThreatened = 0.50f;
    this->Inventory = NULL;
    this->Skill = 4.00f;
    this->DBNOPlayStyle = EDBNOPlayStyle::ThristyButPassiveOnPlayers;
    this->bWaitForMapReadyToStartLogic = true;
    this->CachedWorldItem = NULL;
}

