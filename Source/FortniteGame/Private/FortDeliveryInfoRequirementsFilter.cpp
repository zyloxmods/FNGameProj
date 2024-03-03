#include "FortDeliveryInfoRequirementsFilter.h"

FFortDeliveryInfoRequirementsFilter::FFortDeliveryInfoRequirementsFilter() {
    this->ApplicableTeamAffiliation = EFortTeamAffiliation::Friendly;
    this->bConsiderTeamAffiliationToInstigator = false;
    this->ApplicableTeam = EFortTeam::Spectator;
    this->bConsiderTeam = false;
    this->bApplyToPlayerPawns = false;
    this->bApplyToAIPawns = false;
    this->bApplyToBuildingActors = false;
    this->BuildingActorSpecification = EFortDeliveryInfoBuildingActorSpecification::All;
    this->bApplyToGlobalEnvironmentAbilityActor = false;
}

