#include "FortGameplayCueManager.h"

UFortGameplayCueManager::UFortGameplayCueManager() {
    this->BROnlyGameplayCueNotifyPaths.AddDefaulted(4);
    this->AdditionalAlwaysLoadedCueTags.AddDefaulted(10);
    this->bClientDelayLoadGameplayCues = true;
}

