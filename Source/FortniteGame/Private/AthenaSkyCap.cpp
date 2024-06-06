#include "AthenaSkyCap.h"
#include "Net/UnrealNetwork.h"


void AAthenaSkyCap::OnStopMovement(const FHitResult& ImpactResult, float Time) {
}

void AAthenaSkyCap::OnRep_SkyCapState() {
}

void AAthenaSkyCap::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaSkyCap, SkyCapState);
}

AAthenaSkyCap::AAthenaSkyCap() {
    SkyCapState = ESkyCapState::Hidden;
}

