#include "FortAthenaMutator_SafeZoneOrderOptimize.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_SafeZoneOrderOptimize::OnRep_ChosenRouteOrder() {
}

void AFortAthenaMutator_SafeZoneOrderOptimize::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, bInitialized);
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, bPaused);
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, Routes);
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, MaxRoutesPerOrder);
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, LockedInRouteIDs);
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, ChosenRouteOrder);
    DOREPLIFETIME(AFortAthenaMutator_SafeZoneOrderOptimize, DebugShortestRouteOrder);
}

AFortAthenaMutator_SafeZoneOrderOptimize::AFortAthenaMutator_SafeZoneOrderOptimize() {
    bInitialized = false;
    bPaused = true;
    MaxRoutesPerOrder = 0;
    MapUILineThickness = 1;
}

