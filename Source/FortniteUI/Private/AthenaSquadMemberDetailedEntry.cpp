#include "AthenaSquadMemberDetailedEntry.h"


FAthenaTeamDisplayInfo UAthenaSquadMemberDetailedEntry::GetSquadDisplayInfo() const {
    return FAthenaTeamDisplayInfo{};
}

UAthenaSquadMemberDetailedEntry::UAthenaSquadMemberDetailedEntry() {
    this->AvatarIcon_MemberAvatar = NULL;
    this->Text_ParticipationStatus = NULL;
}

