#include "FortGameStatePvE.h"
#include "Net/UnrealNetwork.h"

AFortAircraft* AFortGameStatePvE::GetAircraft() const {
    return NULL;
}

void AFortGameStatePvE::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStatePvE, Aircraft);
}

AFortGameStatePvE::AFortGameStatePvE() {
    this->Aircraft = NULL;
}

