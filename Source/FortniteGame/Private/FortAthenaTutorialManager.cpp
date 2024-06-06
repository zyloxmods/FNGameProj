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
    bPlayTutorials = true;
    InitialTutorial = NULL;
    Athena_Tutorial_Spawn_Point = NULL;
    ForceEnableDefensiveBuildingFlow = false;
    CurrentTutorialIndex = 0;
    GuidedTutorialTimeStart = 1;
    CurrentTutorialStepTimeStart = 1;
    TutorialHUD = NULL;
}

