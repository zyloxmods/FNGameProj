#include "FortCreativeBudget.h"

FFortCreativeBudget::FFortCreativeBudget() {
    TotalBudget = 0;
    UsedBudget = 0;
    Category = EFortBudgetCategory::Memory;
    bCritical = false;
    BudgetLowend = 0;
    FixedInstanceCost = 0;
}

