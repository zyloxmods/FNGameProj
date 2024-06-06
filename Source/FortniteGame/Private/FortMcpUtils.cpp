#include "FortMcpUtils.h"

UFortMcpUtils::UFortMcpUtils() {
    UnredeemedCodesUrl = TEXT("/api/game/v2/friendcodes/`accountId/`codeBackend");
    RecordUserStatsUrl = TEXT("/api/stats/bulk?ownertype=1");
    QueryUserStatsUrl = TEXT("/api/stats/accountId/`accountId/bulk/window/alltime");
    QueryLeaderboardUrl = TEXT("/api/leaderboards/type/`typeId/stat/`leaderboardName/window/weekly?ownertype=1");
    QueryCohortUrl = TEXT("/api/game/v2/leaderboards/cohort/`accountId?playlist=`cohortName");
    ProcessPendingRewardsUrl = TEXT("/api/game/v2/events/v2/processPendingRewards/`accountId");
    bShouldSendTimeTracking = false;
    VoiceLoginUrl = TEXT("/api/game/v2/voice/`accountId/login");
    VoiceJoinUrl = TEXT("/api/game/v2/voice/`accountId/join/`partyId");
    PrivacySettingsUrl = TEXT("/api/game/v2/privacy/account/`accountId");
    ReplacePlayerTokensUrl = TEXT("/api/game/v2/events/v2/setSubgroup/`AccountId");
    AllowHomebaseCharactersUrl = TEXT("/api/game/v2/homebase/allowed-name-chars");
    ReportPlayerToxicityUrl = TEXT("/api/game/v2/toxicity/account/`accountId/report/`offenderAccountId");
    EventCalendardTestUrl = TEXT("/api/admin/scheduled_events/time_dilation/now/`desiredTime");
    CreativeHistoryBaseUrl = TEXT("/api/game/v2/creative");
    DefaultLogTailLengthKb = 0;
}

