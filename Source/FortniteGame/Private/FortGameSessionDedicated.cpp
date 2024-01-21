#include "FortGameSessionDedicated.h"

AFortGameSessionDedicated::AFortGameSessionDedicated() {
    this->bEnforceCrossplayRestrictions = true;
    this->bAllowPS4InMixedConsole = true;
    this->HotfixCheckTimer = 300.00f;
    this->HotfixCheckVariance = 120.00f;
    this->ConsoleSessionRetryWaitSeconds = 30.00f;
    this->ServerManifestOutputFormat = EServerManifestOutputFormat::HTTP;
    this->ServerManifestDestination = TEXT("127.0.0.1:7070");
    this->IdleResetShortTimer = 60.00f;
}

