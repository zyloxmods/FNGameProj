#include "AthenaTraversePoint.h"
#include "Net/UnrealNetwork.h"

void AAthenaTraversePoint::OnRep_CurrentState() {
}

void AAthenaTraversePoint::OnNewState_TouchedByPlayer_Server() {
}


void AAthenaTraversePoint::OnNewState_Hidden_Server() {
}


void AAthenaTraversePoint::OnNewState_Finished_Server() {
}


void AAthenaTraversePoint::OnNewState_Active_Server() {
}


void AAthenaTraversePoint::OnImpactedByPlayer(AActor* PlayerActor) {
}

void AAthenaTraversePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaTraversePoint, CurrentState);
}

AAthenaTraversePoint::AAthenaTraversePoint() {
    bShouldTeleportToGround = true;
    CurrentState = ETraversePointState::None;
}

