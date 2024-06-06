#include "FortAthenaMutator_Traverse.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Traverse::OnRep_CurrentPointIndex() {
}

void AFortAthenaMutator_Traverse::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void AFortAthenaMutator_Traverse::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Traverse, TraversePoints);
    DOREPLIFETIME(AFortAthenaMutator_Traverse, CurrentPointIndex);
}

AFortAthenaMutator_Traverse::AFortAthenaMutator_Traverse() {
    CurrentPointIndex = 0;
    TraversePointClass = NULL;
    BoundsXYSplineClass = NULL;
}

