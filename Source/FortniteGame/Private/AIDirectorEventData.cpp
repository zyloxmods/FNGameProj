#include "AIDirectorEventData.h"

FAIDirectorEventData::FAIDirectorEventData() {
    Event = EFortAIDirectorEvent::PlayerAIEnemies;
    ContributionType = EFortAIDirectorEventContribution::Increment;
    OwnerParticipantType = EFortAIDirectorEventParticipant::Target;
}

