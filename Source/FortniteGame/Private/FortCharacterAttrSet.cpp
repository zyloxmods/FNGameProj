#include "FortCharacterAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortCharacterAttrSet::OnRep_Tech() {
}

void UFortCharacterAttrSet::OnRep_Resistance() {
}

void UFortCharacterAttrSet::OnRep_Offense() {
}

void UFortCharacterAttrSet::OnRep_MaxCharacterLevel() {
}

void UFortCharacterAttrSet::OnRep_Fortitude() {
}

void UFortCharacterAttrSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCharacterAttrSet, Fortitude);
    DOREPLIFETIME(UFortCharacterAttrSet, Offense);
    DOREPLIFETIME(UFortCharacterAttrSet, Tech);
    DOREPLIFETIME(UFortCharacterAttrSet, Resistance);
    DOREPLIFETIME(UFortCharacterAttrSet, MaxCharacterLevel);
}

UFortCharacterAttrSet::UFortCharacterAttrSet() {
}

