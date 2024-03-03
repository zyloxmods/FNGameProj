#include "FortAthenaMutator_EnvironmentalDamage.h"

AFortAthenaMutator_EnvironmentalDamage::AFortAthenaMutator_EnvironmentalDamage() {
    this->DamageMultiplier = 1;
    this->bExcludeActorsAddedToVolume = false;
    this->WorldActivationTime = 1;
    this->TeamDamageFilter = EBuildingDamageTeamFilter::Default;
    this->EnvironmentDamageFilter = EEnvironmentDamageFilter::Off;
}

