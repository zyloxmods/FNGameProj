#include "FortGameplayCueManager.h"

UFortGameplayCueManager::UFortGameplayCueManager() {
    BROnlyGameplayCueNotifyPaths.AddDefaulted(6);
    bClientDelayLoadGameplayCues = true;
}

