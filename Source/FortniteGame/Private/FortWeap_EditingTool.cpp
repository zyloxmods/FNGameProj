#include "FortWeap_EditingTool.h"
#include "Net/UnrealNetwork.h"

void AFortWeap_EditingTool::OnRep_EditActor() {
}

void AFortWeap_EditingTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeap_EditingTool, EditActor);
}

AFortWeap_EditingTool::AFortWeap_EditingTool() {
    EditActor = NULL;
    bEditConfirmed = false;
}

