#include "FortCreativeBudget.h"

FFortCreativeBudget::FFortCreativeBudget() {
    this->TotalBudget = 0;
    this->UsedBudget = 0;
    this->Category = EFortBudgetCategory::Memory;
    this->bCritical = false;
    this->BudgetLowend = 0;
    this->FixedInstanceCost = 0;
}

