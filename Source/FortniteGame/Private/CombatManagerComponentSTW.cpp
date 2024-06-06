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
    ReplicatedCombatEventHeat[0] = 1;
    ReplicatedCombatEventHeat[1] = 1;
    ReplicatedCombatEventHeat[2] = 1;
    ReplicatedCombatEventHeat[3] = 1;
    ReplicatedCombatEventHeat[4] = 1;
    ReplicatedCombatEventHeat[5] = 1;
    ReplicatedCombatEventHeat[6] = 1;
    ReplicatedCombatEventHeat[7] = 1;
    ReplicatedCombatEventHeat[8] = 1;
    ReplicatedCombatEventHeat[9] = 1;
    ReplicatedCombatEventHeat[10] = 1;
    ReplicatedCombatEventHeat[11] = 1;
    ReplicatedCombatEventHeat[12] = 1;
    ReplicatedCombatEventHeat[13] = 1;
    ReplicatedCombatEventHeat[14] = 1;
    ReplicatedCombatEventHeat[15] = 1;
    ReplicatedCombatEventHeat[16] = 1;
    ReplicatedCombatEventHeat[17] = 1;
    ReplicatedCombatEventHeat[18] = 1;
    ReplicatedCombatEventHeat[19] = 1;
    ReplicatedCombatEventHeat[20] = 1;
    ReplicatedCombatEventHeat[21] = 1;
    ReplicatedCombatEventHeat[22] = 1;
    ReplicatedCombatEventHeat[23] = 1;
    ReplicatedCombatEventHeat[24] = 1;
    ReplicatedCombatEventHeat[25] = 1;
    ReplicatedCombatEventHeat[26] = 1;
    ReplicatedCombatEventHeat[27] = 1;
    CombatEventHeat[0] = 1;
    CombatEventHeat[1] = 1;
    CombatEventHeat[2] = 1;
    CombatEventHeat[3] = 1;
    CombatEventHeat[4] = 1;
    CombatEventHeat[5] = 1;
    CombatEventHeat[6] = 1;
    CombatEventHeat[7] = 1;
    CombatEventHeat[8] = 1;
    CombatEventHeat[9] = 1;
    CombatEventHeat[10] = 1;
    CombatEventHeat[11] = 1;
    CombatEventHeat[12] = 1;
    CombatEventHeat[13] = 1;
    CombatEventHeat[14] = 1;
    CombatEventHeat[15] = 1;
    CombatEventHeat[16] = 1;
    CombatEventHeat[17] = 1;
    CombatEventHeat[18] = 1;
    CombatEventHeat[19] = 1;
    CombatEventHeat[20] = 1;
    CombatEventHeat[21] = 1;
    CombatEventHeat[22] = 1;
    CombatEventHeat[23] = 1;
    CombatEventHeat[24] = 1;
    CombatEventHeat[25] = 1;
    CombatEventHeat[26] = 1;
    CombatEventHeat[27] = 1;
    CombatFactors[0] = 1;
    CombatFactors[1] = 1;
    CombatFactors[2] = 1;
    CombatFactors[3] = 1;
    CombatFactors[4] = 1;
    CombatFactors[5] = 1;
    CombatFactors[6] = 1;
    CombatFactors[7] = 1;
    CombatFactors[8] = 1;
    CombatFactors[9] = 1;
    CombatFactors[10] = 1;
    CombatFactors[11] = 1;
    CurrentTotalHeat = 1;
    MaximumTotalHeat = 1;
    MaxHeatEver = 1;
    CombatGraph = NULL;
    FactorGraph = NULL;
}

