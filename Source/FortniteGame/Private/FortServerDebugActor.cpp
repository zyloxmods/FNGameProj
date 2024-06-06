#include "FortServerDebugActor.h"
#include "Net/UnrealNetwork.h"

void AFortServerDebugActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortServerDebugActor, ServerMemSharedInKb);
    DOREPLIFETIME(AFortServerDebugActor, ServerMemUniqueInKb);
    DOREPLIFETIME(AFortServerDebugActor, ServerMemVirtualInKb);
    DOREPLIFETIME(AFortServerDebugActor, ServerMemPhysicalInKb);
    DOREPLIFETIME(AFortServerDebugActor, SharedDeltaInLastMinute);
    DOREPLIFETIME(AFortServerDebugActor, SharedDeltaSinceProcessStart);
    DOREPLIFETIME(AFortServerDebugActor, SharedDeltaSinceDebugStart);
    DOREPLIFETIME(AFortServerDebugActor, UniqueDeltaInLastMinute);
    DOREPLIFETIME(AFortServerDebugActor, UniqueDeltaSinceProcessStart);
    DOREPLIFETIME(AFortServerDebugActor, UniqueDeltaSinceDebugStart);
}

AFortServerDebugActor::AFortServerDebugActor() {
    ServerMemSharedInKb = 0;
    ServerMemUniqueInKb = 0;
    ServerMemVirtualInKb = 0;
    ServerMemPhysicalInKb = 0;
    SharedDeltaInLastMinute = 0;
    SharedDeltaSinceProcessStart = 0;
    SharedDeltaSinceDebugStart = 0;
    UniqueDeltaInLastMinute = 0;
    UniqueDeltaSinceProcessStart = 0;
    UniqueDeltaSinceDebugStart = 0;
}

