#include "FortAthenaTutorialBase.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaTutorialBase::SetEasyInteractIconActor_Implementation(AActor* TrackedActor) {
}

void AFortAthenaTutorialBase::OnStopTutorial_Client_Implementation() {
}

void AFortAthenaTutorialBase::OnStartTutorial_Client_Implementation() {
}

void AFortAthenaTutorialBase::OnRep_TrackedActor() {
}

void AFortAthenaTutorialBase::OnClientStepCompleted_Server_Implementation(int32 StepIndex) {
}

bool AFortAthenaTutorialBase::IsExecuting() const {
    return false;
}

void AFortAthenaTutorialBase::ExecuteTutorialStep_Client_Implementation(int32 StepIndex) {
}

void AFortAthenaTutorialBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaTutorialBase, bExecuting);
    DOREPLIFETIME(AFortAthenaTutorialBase, CurrentStepIndex);
    DOREPLIFETIME(AFortAthenaTutorialBase, CurrentTrackedActor);
}

AFortAthenaTutorialBase::AFortAthenaTutorialBase() {
    CameraStartPositionActor = NULL;
    bExecuting = false;
    CurrentStepIndex = 0;
    CurrentTrackedActor = NULL;
}

