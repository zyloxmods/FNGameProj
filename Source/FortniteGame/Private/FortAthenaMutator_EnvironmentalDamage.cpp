#include "FortAthenaMutator_EnvironmentalDamage.h"

AFortAthenaMutator_EnvironmentalDamage::AFortAthenaMutator_EnvironmentalDamage() {
    DamageMultiplier = 1;
    bExcludeActorsAddedToVolume = false;
    WorldActivationTime = 1;
    TeamDamageFilter = EBuildingDamageTeamFilter::Default;
    EnvironmentDamageFilter = EEnvironmentDamageFilter::Off;
}

