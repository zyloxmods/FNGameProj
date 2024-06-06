#include "FortPlayerPetRepState.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerPetRepState::OnRep_StimuliTag() {
}

void AFortPlayerPetRepState::OnRep_PetItemDef() {
}

void AFortPlayerPetRepState::OnRep_LookAtTarget() {
}

AFortPlayerPawn* AFortPlayerPetRepState::GetFortPlayerPawn() const {
    return NULL;
}

void AFortPlayerPetRepState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerPetRepState, LookAtTarget);
    DOREPLIFETIME(AFortPlayerPetRepState, PetItemDef);
    DOREPLIFETIME(AFortPlayerPetRepState, StimuliTag);
}

AFortPlayerPetRepState::AFortPlayerPetRepState() {
    LookAtTarget = NULL;
    PetItemDef = NULL;
}

