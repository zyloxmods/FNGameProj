#include "FortCombatManager.h"
#include "Net/UnrealNetwork.h"


void AFortCombatManager::OnRep_CombatEventHeat() {
}

float AFortCombatManager::GetEventHeatPercentTotal(EFortCombatEvents CombatEvent) {
    return 0.0f;
}

float AFortCombatManager::GetEventHeatPercent(EFortCombatEvents CombatEvent) {
    return 0.0f;
}

void AFortCombatManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCombatManager, ReplicatedCombatEventHeat);
    DOREPLIFETIME(AFortCombatManager, CurrentTotalHeat);
    DOREPLIFETIME(AFortCombatManager, MaximumTotalHeat);
    DOREPLIFETIME(AFortCombatManager, MaxHeatEver);
}

AFortCombatManager::AFortCombatManager() {
    this->ReplicatedCombatEventHeat[0] = 0.00f;
    this->ReplicatedCombatEventHeat[1] = 0.00f;
    this->ReplicatedCombatEventHeat[2] = 0.00f;
    this->ReplicatedCombatEventHeat[3] = 0.00f;
    this->ReplicatedCombatEventHeat[4] = 0.00f;
    this->ReplicatedCombatEventHeat[5] = 0.00f;
    this->ReplicatedCombatEventHeat[6] = 0.00f;
    this->ReplicatedCombatEventHeat[7] = 0.00f;
    this->ReplicatedCombatEventHeat[8] = 0.00f;
    this->ReplicatedCombatEventHeat[9] = 0.00f;
    this->ReplicatedCombatEventHeat[10] = 0.00f;
    this->ReplicatedCombatEventHeat[11] = 0.00f;
    this->ReplicatedCombatEventHeat[12] = 0.00f;
    this->ReplicatedCombatEventHeat[13] = 0.00f;
    this->ReplicatedCombatEventHeat[14] = 0.00f;
    this->ReplicatedCombatEventHeat[15] = 0.00f;
    this->ReplicatedCombatEventHeat[16] = 0.00f;
    this->ReplicatedCombatEventHeat[17] = 0.00f;
    this->ReplicatedCombatEventHeat[18] = 0.00f;
    this->ReplicatedCombatEventHeat[19] = 0.00f;
    this->ReplicatedCombatEventHeat[20] = 0.00f;
    this->ReplicatedCombatEventHeat[21] = 0.00f;
    this->ReplicatedCombatEventHeat[22] = 0.00f;
    this->ReplicatedCombatEventHeat[23] = 0.00f;
    this->ReplicatedCombatEventHeat[24] = 0.00f;
    this->ReplicatedCombatEventHeat[25] = 0.00f;
    this->ReplicatedCombatEventHeat[26] = 0.00f;
    this->ReplicatedCombatEventHeat[27] = 0.00f;
    this->CombatEventHeat[0] = 0.00f;
    this->CombatEventHeat[1] = 0.00f;
    this->CombatEventHeat[2] = 0.00f;
    this->CombatEventHeat[3] = 0.00f;
    this->CombatEventHeat[4] = 0.00f;
    this->CombatEventHeat[5] = 0.00f;
    this->CombatEventHeat[6] = 0.00f;
    this->CombatEventHeat[7] = 0.00f;
    this->CombatEventHeat[8] = 0.00f;
    this->CombatEventHeat[9] = 0.00f;
    this->CombatEventHeat[10] = 0.00f;
    this->CombatEventHeat[11] = 0.00f;
    this->CombatEventHeat[12] = 0.00f;
    this->CombatEventHeat[13] = 0.00f;
    this->CombatEventHeat[14] = 0.00f;
    this->CombatEventHeat[15] = 0.00f;
    this->CombatEventHeat[16] = 0.00f;
    this->CombatEventHeat[17] = 0.00f;
    this->CombatEventHeat[18] = 0.00f;
    this->CombatEventHeat[19] = 0.00f;
    this->CombatEventHeat[20] = 0.00f;
    this->CombatEventHeat[21] = 0.00f;
    this->CombatEventHeat[22] = 0.00f;
    this->CombatEventHeat[23] = 0.00f;
    this->CombatEventHeat[24] = 0.00f;
    this->CombatEventHeat[25] = 0.00f;
    this->CombatEventHeat[26] = 0.00f;
    this->CombatEventHeat[27] = 0.00f;
    this->CombatFactors[0] = 0.00f;
    this->CombatFactors[1] = 0.00f;
    this->CombatFactors[2] = 0.00f;
    this->CombatFactors[3] = 0.00f;
    this->CombatFactors[4] = 0.00f;
    this->CombatFactors[5] = 0.00f;
    this->CombatFactors[6] = 0.00f;
    this->CombatFactors[7] = 0.00f;
    this->CombatFactors[8] = 0.00f;
    this->CombatFactors[9] = 0.00f;
    this->CombatFactors[10] = 0.00f;
    this->CombatFactors[11] = 0.00f;
    this->CurrentTotalHeat = 0.00f;
    this->MaximumTotalHeat = 0.00f;
    this->MaxHeatEver = 1.00f;
}

