#include "McpProfileGroup.h"

UMcpProfileGroup::UMcpProfileGroup() {
    this->DelayMcpResults = 0;
    this->WeeklyIntervalStartDay = 0;
    this->bIsServer = false;
    this->ProfileNotificationsStompTopic = TEXT("/topic/fn/profile/`accountid`/`app`");
    this->ProfileWriteLockTimeoutSecs = 0;
    this->bSubscribedToNotifications = false;
    this->ApplyStashEndPoint = TEXT("/api/admin/account/`accountId/apply-stash/`stashName");
    this->bSendProfileCommandRevisions = true;
    this->bAsyncParseProfileUpdates = true;
    this->MaxChangesToForwardInUpdate = 0;
    this->NewItemLogThreshold = 0;
}

