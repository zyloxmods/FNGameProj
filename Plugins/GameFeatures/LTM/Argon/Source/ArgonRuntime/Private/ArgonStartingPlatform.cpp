#include "ArgonStartingPlatform.h"
#include "Net/UnrealNetwork.h"

void AArgonStartingPlatform::OnRep_IsEnabled() {
}

void AArgonStartingPlatform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArgonStartingPlatform, bIsEnabled);
}

AArgonStartingPlatform::AArgonStartingPlatform() {
    this->bIsEnabled = true;
}

