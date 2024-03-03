#include "FortCharacterAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortCharacterAttrSet::OnRep_Tech(const FFortGameplayAttributeData& OldValue) {
}

void UFortCharacterAttrSet::OnRep_Resistance(const FFortGameplayAttributeData& OldValue) {
}

void UFortCharacterAttrSet::OnRep_Offense(const FFortGameplayAttributeData& OldValue) {
}

void UFortCharacterAttrSet::OnRep_MaxCharacterLevel(const FFortGameplayAttributeData& OldValue) {
}

void UFortCharacterAttrSet::OnRep_Fortitude(const FFortGameplayAttributeData& OldValue) {
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

