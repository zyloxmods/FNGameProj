#include "FortScriptedActionManager.h"

void AFortScriptedActionManager::HandleClientEvent_Undefined(UObject* EventSource, UObject* EventFocus, const FFortClientEvent& ClientEvent) {
}

AFortScriptedActionManager::AFortScriptedActionManager() {
    bIsProcessingClientEvent = false;
}

