#include "FortUITeamInfo.h"

bool UFortUITeamInfo::IsTeamMemberSynchronizing(const FUniqueNetIdRepl& PlayerId) {
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
    TeamContext = NULL;
    TeamAssignment = 255;
    TotalFilledSlots = 0;
    PreviousFilledSlots = 0;
}

