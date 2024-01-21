#include "McpProfileGroup.h"

UMcpProfileGroup::UMcpProfileGroup() {
    this->DelayMcpResults = 0;
    this->WeeklyIntervalStartDay = 4;
    this->bIsServer = false;
    this->ProfileNotificationsStompTopic = TEXT("/topic/fn/profile/`accountid`/`app`");
    this->ProfileWriteLockTimeoutSecs = 180;
    this->bSubscribedToNotifications = false;
    this->ApplyStashEndPoint = TEXT("/api/admin/account/`accountId/apply-stash/`stashName");
    this->bSendProfileCommandRevisions = true;
    this->bAsyncParseProfileUpdates = true;
}

