#include "FortChallengeBundleQuestEntry.h"

FFortChallengeBundleQuestEntry::FFortChallengeBundleQuestEntry() {
    QuestUnlockType = EChallengeBundleQuestUnlockType::Manually;
    bStartActive = false;
    bIsPrerequisite = false;
    UnlockValue = 0;
}

