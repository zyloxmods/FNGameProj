#include "FortAsyncAction_SendQuestStatEvent.h"

UFortAsyncAction_SendQuestStatEvent* UFortAsyncAction_SendQuestStatEvent::SendClientStatEventWithTags(UFortQuestManager* NewQuestManager, FGameplayTagContainer NewTargetTags, FGameplayTagContainer NewSourceTags, FGameplayTagContainer NewContextTags, int32 NewCount) {
    return NULL;
}

UFortAsyncAction_SendQuestStatEvent* UFortAsyncAction_SendQuestStatEvent::SendClientStatEvent(UFortQuestManager* NewQuestManager, FDataTableRowHandle NewObjectiveStat, int32 NewCount) {
    return NULL;
}

UFortAsyncAction_SendQuestStatEvent::UFortAsyncAction_SendQuestStatEvent() {
    QuestManager = NULL;
    Count = 0;
}

