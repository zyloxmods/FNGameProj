#include "FortAthenaMutator_PlayerMarker.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_PlayerMarker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_PlayerMarker, PlayerMarkerEffectDataArray);
}

AFortAthenaMutator_PlayerMarker::AFortAthenaMutator_PlayerMarker() {
    PlayerMarkerMarkerEffectClass = NULL;
}

