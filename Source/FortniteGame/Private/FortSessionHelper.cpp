#include "FortSessionHelper.h"
#include "FortPartyBeaconClient.h"

UFortSessionHelper::UFortSessionHelper() {
    this->BeaconClientClass = AFortPartyBeaconClient::StaticClass();
    this->PartyBeaconClient = NULL;
    this->CurrentJoinState = EFortSessionHelperJoinState::NotJoining;
    this->CurrentJoinResult = EFortSessionHelperJoinResult::NoResult;
}

