#include "FortAbilityCost.h"

FFortAbilityCost::FFortAbilityCost() {
    this->CostSource = EFortAbilityCostSource::Stamina;
    this->ItemDefinition = NULL;
    this->bOnlyApplyCostOnHit = false;
}

