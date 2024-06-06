#include "FortGameSessionDedicated.h"

AFortGameSessionDedicated::AFortGameSessionDedicated() {
    bEnforceCrossplayRestrictions = true;
    bAllowPS4InMixedConsole = true;
    HotfixCheckTimer = 1;
    HotfixCheckVariance = 1;
    DataAssetDirectoryUpdateCheckTimer = 1;
    DataAssetDirectoryUpdateCheckVariance = 1;
    ReservationAbandonmentTime = 1;
    ConsoleSessionRetryWaitSeconds = 1;
    ServerManifestOutputFormat = EServerManifestOutputFormat::FlatFile;
    ServerManifestDestination = TEXT("127.0.0.1:7070");
    IdleResetShortTimer = 1;
}

