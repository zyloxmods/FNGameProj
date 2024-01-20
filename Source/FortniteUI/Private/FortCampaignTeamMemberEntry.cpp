#include "FortCampaignTeamMemberEntry.h"


bool UFortCampaignTeamMemberEntry::HasTeamMembers() const {
    return false;
}

UFortCampaignTeamMemberEntry::UFortCampaignTeamMemberEntry() {
    this->RepresentedMemberIndex = -1;
    this->CurrentConnectionState = EFortMemberConnectionState::Invalid;
}

