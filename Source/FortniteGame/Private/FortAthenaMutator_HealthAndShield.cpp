#include "FortAthenaMutator_HealthAndShield.h"

AFortAthenaMutator_HealthAndShield::AFortAthenaMutator_HealthAndShield() {
    NumericalMutatorOverride = EAthenaMutatorEvaluators::NoOverride;
    MaxHealth = 1;
    StartingHealth = 1;
    MaxShield = 1;
    StartingShield = 1;
}

