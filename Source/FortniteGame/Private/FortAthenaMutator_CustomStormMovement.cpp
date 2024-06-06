#include "FortAthenaMutator_CustomStormMovement.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_CustomStormMovement::OnRep_SafeZoneRouteIndex() {
}

FSafeZoneRoute AFortAthenaMutator_CustomStormMovement::GetSafeZoneRoute(const FString& ContextString) const {
    return FSafeZoneRoute{};
}

void AFortAthenaMutator_CustomStormMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_CustomStormMovement, SafeZoneRoutes);
    DOREPLIFETIME(AFortAthenaMutator_CustomStormMovement, SafeZoneRouteIndex);
}

AFortAthenaMutator_CustomStormMovement::AFortAthenaMutator_CustomStormMovement() {
    PhaseProgressCurve = NULL;
    SafeZoneRouteIndex = 0;
}

