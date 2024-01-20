#include "FortUITeamInfo.h"

bool UFortUITeamInfo::IsTeamMemberSynchronizing(const FUniqueNetIdRepl& PlayerID) {
    return false;
}

void UFortUITeamInfo::GetTeamMembers(TArray<FFortTeamMemberInfo>& TeamMembers) const {
}

void UFortUITeamInfo::GetTeamMemberIDs(TArray<FUniqueNetIdRepl>& TeamMemberIDs) const {
}

bool UFortUITeamInfo::GetTeamMember(int32 MemberIndex, FFortTeamMemberInfo& OutMember) const {
    return false;
}

void UFortUITeamInfo::GetTeamHitPointFractions(TArray<float>& HealthFractions, TArray<float>& ShieldFractions) const {
}

UFortUITeamInfo::UFortUITeamInfo() {
    this->TeamContext = NULL;
    this->TeamAssignment = 255;
    this->TotalFilledSlots = 0;
    this->PreviousFilledSlots = 0;
}

