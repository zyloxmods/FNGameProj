#include "AsyncAction_WaitForScriptedActions.h"

UAsyncAction_WaitForScriptedActions* UAsyncAction_WaitForScriptedActions::WaitForScriptedAction(UObject* WorldContextObject, FFortClientEventName EventType) {
    return NULL;
}

UAsyncAction_WaitForScriptedActions* UAsyncAction_WaitForScriptedActions::WaitForMultipleScriptedActions(UObject* WorldContextObject, TArray<FFortClientEventName> EventTypes) {
    return NULL;
}

UAsyncAction_WaitForScriptedActions* UAsyncAction_WaitForScriptedActions::WaitForAllScriptedActions(UObject* WorldContextObject) {
    return NULL;
}

UAsyncAction_WaitForScriptedActions::UAsyncAction_WaitForScriptedActions() {
    ActionManager = NULL;
}

