#include "AIDirectorEventData.h"

FAIDirectorEventData::FAIDirectorEventData() {
    this->Event = EFortAIDirectorEvent::PlayerAIEnemies;
    this->ContributionType = EFortAIDirectorEventContribution::Increment;
    this->OwnerParticipantType = EFortAIDirectorEventParticipant::Target;
}

