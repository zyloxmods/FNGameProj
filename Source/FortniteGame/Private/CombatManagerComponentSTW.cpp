#include "CombatManagerComponentSTW.h"
#include "Net/UnrealNetwork.h"

void UCombatManagerComponentSTW::ServerTriggerCombatEventBatch_Implementation(const TArray<FFortCombatManagerEvent>& Payload) {
}
bool UCombatManagerComponentSTW::ServerTriggerCombatEventBatch_Validate(const TArray<FFortCombatManagerEvent>& Payload) {
    return true;
}

void UCombatManagerComponentSTW::ServerTriggerCombatEvent_Implementation(EFortCombatEvents TriggeredEvent, float HeatMultiplier) {
}
bool UCombatManagerComponentSTW::ServerTriggerCombatEvent_Validate(EFortCombatEvents TriggeredEvent, float HeatMultiplier) {
    return true;
}

void UCombatManagerComponentSTW::OnRep_CombatEventHeat() {
}

float UCombatManagerComponentSTW::GetEventHeatPercentTotal(EFortCombatEvents CombatEvent) {
    return 0.0f;
}

float UCombatManagerComponentSTW::GetEventHeatPercent(EFortCombatEvents CombatEvent) {
    return 0.0f;
}

void UCombatManagerComponentSTW::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCombatManagerComponentSTW, ReplicatedCombatEventHeat);
    DOREPLIFETIME(UCombatManagerComponentSTW, CurrentTotalHeat);
    DOREPLIFETIME(UCombatManagerComponentSTW, MaximumTotalHeat);
    DOREPLIFETIME(UCombatManagerComponentSTW, MaxHeatEver);
}

UCombatManagerComponentSTW::UCombatManagerComponentSTW() {
    this->ReplicatedCombatEventHeat[0] = 1;
    this->ReplicatedCombatEventHeat[1] = 1;
    this->ReplicatedCombatEventHeat[2] = 1;
    this->ReplicatedCombatEventHeat[3] = 1;
    this->ReplicatedCombatEventHeat[4] = 1;
    this->ReplicatedCombatEventHeat[5] = 1;
    this->ReplicatedCombatEventHeat[6] = 1;
    this->ReplicatedCombatEventHeat[7] = 1;
    this->ReplicatedCombatEventHeat[8] = 1;
    this->ReplicatedCombatEventHeat[9] = 1;
    this->ReplicatedCombatEventHeat[10] = 1;
    this->ReplicatedCombatEventHeat[11] = 1;
    this->ReplicatedCombatEventHeat[12] = 1;
    this->ReplicatedCombatEventHeat[13] = 1;
    this->ReplicatedCombatEventHeat[14] = 1;
    this->ReplicatedCombatEventHeat[15] = 1;
    this->ReplicatedCombatEventHeat[16] = 1;
    this->ReplicatedCombatEventHeat[17] = 1;
    this->ReplicatedCombatEventHeat[18] = 1;
    this->ReplicatedCombatEventHeat[19] = 1;
    this->ReplicatedCombatEventHeat[20] = 1;
    this->ReplicatedCombatEventHeat[21] = 1;
    this->ReplicatedCombatEventHeat[22] = 1;
    this->ReplicatedCombatEventHeat[23] = 1;
    this->ReplicatedCombatEventHeat[24] = 1;
    this->ReplicatedCombatEventHeat[25] = 1;
    this->ReplicatedCombatEventHeat[26] = 1;
    this->ReplicatedCombatEventHeat[27] = 1;
    this->CombatEventHeat[0] = 1;
    this->CombatEventHeat[1] = 1;
    this->CombatEventHeat[2] = 1;
    this->CombatEventHeat[3] = 1;
    this->CombatEventHeat[4] = 1;
    this->CombatEventHeat[5] = 1;
    this->CombatEventHeat[6] = 1;
    this->CombatEventHeat[7] = 1;
    this->CombatEventHeat[8] = 1;
    this->CombatEventHeat[9] = 1;
    this->CombatEventHeat[10] = 1;
    this->CombatEventHeat[11] = 1;
    this->CombatEventHeat[12] = 1;
    this->CombatEventHeat[13] = 1;
    this->CombatEventHeat[14] = 1;
    this->CombatEventHeat[15] = 1;
    this->CombatEventHeat[16] = 1;
    this->CombatEventHeat[17] = 1;
    this->CombatEventHeat[18] = 1;
    this->CombatEventHeat[19] = 1;
    this->CombatEventHeat[20] = 1;
    this->CombatEventHeat[21] = 1;
    this->CombatEventHeat[22] = 1;
    this->CombatEventHeat[23] = 1;
    this->CombatEventHeat[24] = 1;
    this->CombatEventHeat[25] = 1;
    this->CombatEventHeat[26] = 1;
    this->CombatEventHeat[27] = 1;
    this->CombatFactors[0] = 1;
    this->CombatFactors[1] = 1;
    this->CombatFactors[2] = 1;
    this->CombatFactors[3] = 1;
    this->CombatFactors[4] = 1;
    this->CombatFactors[5] = 1;
    this->CombatFactors[6] = 1;
    this->CombatFactors[7] = 1;
    this->CombatFactors[8] = 1;
    this->CombatFactors[9] = 1;
    this->CombatFactors[10] = 1;
    this->CombatFactors[11] = 1;
    this->CurrentTotalHeat = 1;
    this->MaximumTotalHeat = 1;
    this->MaxHeatEver = 1;
    this->CombatGraph = NULL;
    this->FactorGraph = NULL;
}

