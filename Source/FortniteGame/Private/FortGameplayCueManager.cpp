#include "FortGameplayCueManager.h"

UFortGameplayCueManager::UFortGameplayCueManager() {
    this->BROnlyGameplayCueNotifyPaths.AddDefaulted(6);
    this->bClientDelayLoadGameplayCues = true;
}

