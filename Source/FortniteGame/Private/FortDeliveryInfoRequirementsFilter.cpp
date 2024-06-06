#include "FortDeliveryInfoRequirementsFilter.h"

FFortDeliveryInfoRequirementsFilter::FFortDeliveryInfoRequirementsFilter() {
    ApplicableTeamAffiliation = EFortTeamAffiliation::Friendly;
    bConsiderTeamAffiliationToInstigator = false;
    ApplicableTeam = EFortTeam::Spectator;
    bConsiderTeam = false;
    bApplyToPlayerPawns = false;
    bApplyToAIPawns = false;
    bApplyToBuildingActors = false;
    BuildingActorSpecification = EFortDeliveryInfoBuildingActorSpecification::All;
    bApplyToGlobalEnvironmentAbilityActor = false;
}

