#include "FortSpecialActorReplicationInfo.h"
#include "Net/UnrealNetwork.h"

void AFortSpecialActorReplicationInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortSpecialActorReplicationInfo, SpecialActorRepList);
}

AFortSpecialActorReplicationInfo::AFortSpecialActorReplicationInfo() {
}

