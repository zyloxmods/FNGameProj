#include "FortMcpUtils.h"

UFortMcpUtils::UFortMcpUtils() {
    this->UnredeemedCodesUrl = TEXT("/api/game/v2/friendcodes/`accountId/`codeBackend");
    this->RecordUserStatsUrl = TEXT("/api/stats/bulk?ownertype=1");
    this->QueryUserStatsUrl = TEXT("/api/stats/accountId/`accountId/bulk/window/alltime");
    this->QueryLeaderboardUrl = TEXT("/api/leaderboards/type/`typeId/stat/`leaderboardName/window/weekly?ownertype=1");
    this->QueryCohortUrl = TEXT("/api/game/v2/leaderboards/cohort/`accountId?playlist=`cohortName");
    this->ProcessPendingRewardsUrl = TEXT("/api/game/v2/events/v2/processPendingRewards/`accountId");
    this->bShouldSendTimeTracking = false;
    this->VoiceLoginUrl = TEXT("/api/game/v2/voice/`accountId/login");
    this->VoiceJoinUrl = TEXT("/api/game/v2/voice/`accountId/join/`partyId");
    this->PrivacySettingsUrl = TEXT("/api/game/v2/privacy/account/`accountId");
    this->AllowHomebaseCharactersUrl = TEXT("/api/game/v2/homebase/allowed-name-chars");
    this->ReportPlayerToxicityUrl = TEXT("/api/game/v2/toxicity/account/`accountId/report/`offenderAccountId");
    this->EventCalendardTestUrl = TEXT("/api/admin/scheduled_events/time_dilation/now/`desiredTime");
    this->CreativeHistoryBaseUrl = TEXT("/api/game/v2/creative");
    this->DefaultLogTailLengthKb = 100;
}

