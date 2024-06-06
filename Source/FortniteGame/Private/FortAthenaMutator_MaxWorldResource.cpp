#include "FortAthenaMutator_MaxWorldResource.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_MaxWorldResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MaxWorldResource, MaxWorldResources);
}

AFortAthenaMutator_MaxWorldResource::AFortAthenaMutator_MaxWorldResource() {
    MaxWorldResources = 0;
}

