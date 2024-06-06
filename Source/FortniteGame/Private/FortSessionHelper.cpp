#include "FortSessionHelper.h"
#include "FortPartyBeaconClient.h"

UFortSessionHelper::UFortSessionHelper() {
    BeaconClientClass = AFortPartyBeaconClient::StaticClass();
    PartyBeaconClient = NULL;
    CurrentJoinState = EFortSessionHelperJoinState::NotJoining;
    CurrentJoinResult = EFortSessionHelperJoinResult::NoResult;
}

