#include "FortAsyncAction_CurrentQuestsReady.h"

UFortAsyncAction_CurrentQuestsReady* UFortAsyncAction_CurrentQuestsReady::CurrentQuestsReadyAsync(UObject* WorldContextObject, UFortQuestManager* QuestManager, const TArray<UFortQuestItemDefinition*>& QuestItemDefinitions) {
    return NULL;
}

UFortAsyncAction_CurrentQuestsReady::UFortAsyncAction_CurrentQuestsReady() {
    MyQuestManager = NULL;
}

