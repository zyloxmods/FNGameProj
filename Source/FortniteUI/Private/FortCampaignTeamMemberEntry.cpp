#include "FortCampaignTeamMemberEntry.h"


bool UFortCampaignTeamMemberEntry::HasTeamMembers() const {
    return false;
}

UFortCampaignTeamMemberEntry::UFortCampaignTeamMemberEntry() {
    this->RepresentedMemberIndex = 0;
    this->CurrentConnectionState = EFortMemberConnectionState::Open;
}

