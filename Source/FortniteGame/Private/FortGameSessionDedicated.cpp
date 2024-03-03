#include "FortGameSessionDedicated.h"

AFortGameSessionDedicated::AFortGameSessionDedicated() {
    this->bEnforceCrossplayRestrictions = true;
    this->bAllowPS4InMixedConsole = true;
    this->HotfixCheckTimer = 1;
    this->HotfixCheckVariance = 1;
    this->DataAssetDirectoryUpdateCheckTimer = 1;
    this->DataAssetDirectoryUpdateCheckVariance = 1;
    this->ReservationAbandonmentTime = 1;
    this->ConsoleSessionRetryWaitSeconds = 1;
    this->ServerManifestOutputFormat = EServerManifestOutputFormat::FlatFile;
    this->ServerManifestDestination = TEXT("127.0.0.1:7070");
    this->IdleResetShortTimer = 1;
}

