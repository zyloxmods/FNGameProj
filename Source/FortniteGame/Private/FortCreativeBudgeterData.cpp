#include "FortCreativeBudgeterData.h"

UFortCreativeBudgeterData::UFortCreativeBudgeterData() {
    CostOverrides.AddDefaulted(131);
    TransientClassLimits.AddDefaulted(3);
    TransientPickupLimits.AddDefaulted(3);
    SavedClassLimits.AddDefaulted(25);
    ComponentSimulationCosts.AddDefaulted(9);
    Budgets.AddDefaulted(1);
    BattleLabBudgets.AddDefaulted(1);
}

