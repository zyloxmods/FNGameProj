#include "FortTeamMemberEntryBase.h"



bool UFortTeamMemberEntryBase::IsCurrentMemberLocal() const {
    return false;
}

bool UFortTeamMemberEntryBase::IsCurrentMemberInFrontend() const {
    return false;
}

EGameReadiness UFortTeamMemberEntryBase::GetCurrentMemberGameReadiness() const {
    return EGameReadiness::NotReady;
}


UFortTeamMemberEntryBase::UFortTeamMemberEntryBase() {
}

