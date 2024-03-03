#include "FortCreativeBudgeterData.h"

UFortCreativeBudgeterData::UFortCreativeBudgeterData() {
    this->CostOverrides.AddDefaulted(131);
    this->TransientClassLimits.AddDefaulted(3);
    this->TransientPickupLimits.AddDefaulted(3);
    this->SavedClassLimits.AddDefaulted(25);
    this->ComponentSimulationCosts.AddDefaulted(9);
    this->Budgets.AddDefaulted(1);
    this->BattleLabBudgets.AddDefaulted(1);
}

