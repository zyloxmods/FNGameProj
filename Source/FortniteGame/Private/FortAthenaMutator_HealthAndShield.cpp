#include "FortAthenaMutator_HealthAndShield.h"

AFortAthenaMutator_HealthAndShield::AFortAthenaMutator_HealthAndShield() {
    this->NumericalMutatorOverride = EAthenaMutatorEvaluators::NoOverride;
    this->MaxHealth = 1;
    this->StartingHealth = 1;
    this->MaxShield = 1;
    this->StartingShield = 1;
}

