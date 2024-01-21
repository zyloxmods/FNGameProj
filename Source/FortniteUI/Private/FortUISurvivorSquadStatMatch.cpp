#include "FortUISurvivorSquadStatMatch.h"

FFortUISurvivorSquadStatMatch::FFortUISurvivorSquadStatMatch() {
    this->NumMembersMeetingCriteria = 0;
    this->NumMembersRequired = 0;
    this->MatchType = EFortUISurvivorSquadMatchType::Multi;
    this->PreviewEffect = EFortBuffState::NoChange;
}

