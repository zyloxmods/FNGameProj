#include "FortPropertyOverrideReplShared.h"
#include "Net/UnrealNetwork.h"

void AFortPropertyOverrideReplShared::OnRep_ReplOverrides() {
}

void AFortPropertyOverrideReplShared::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPropertyOverrideReplShared, ReplOverrides);
}

AFortPropertyOverrideReplShared::AFortPropertyOverrideReplShared() {
}

