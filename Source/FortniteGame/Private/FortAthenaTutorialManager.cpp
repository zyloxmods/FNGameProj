#include "FortAthenaTutorialManager.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaTutorialManager::Server_OnTutorialScreenCompleted_Implementation() {
}

void AFortAthenaTutorialManager::Server_OnClientReadyToStartMatch_Implementation() {
}

void AFortAthenaTutorialManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaTutorialManager, CurrentTutorialIndex);
}

AFortAthenaTutorialManager::AFortAthenaTutorialManager() {
    this->bPlayTutorials = true;
    this->InitialTutorial = NULL;
    this->Athena_Tutorial_Spawn_Point = NULL;
    this->ForceEnableDefensiveBuildingFlow = false;
    this->CurrentTutorialIndex = 0;
    this->GuidedTutorialTimeStart = 1;
    this->CurrentTutorialStepTimeStart = 1;
    this->TutorialHUD = NULL;
}

