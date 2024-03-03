#include "FortChallengeBundleScheduleDefinition.h"

int32 UFortChallengeBundleScheduleDefinition::GetSortPriority() const {
    return 0;
}

int32 UFortChallengeBundleScheduleDefinition::GetNumBundles() const {
    return 0;
}

FString UFortChallengeBundleScheduleDefinition::GetEventName() const {
    return TEXT("");
}

FString UFortChallengeBundleScheduleDefinition::GetCalendarEventName() const {
    return TEXT("");
}

TArray<UFortChallengeBundleItemDefinition*> UFortChallengeBundleScheduleDefinition::GetBundleDefinitions() const {
    return TArray<UFortChallengeBundleItemDefinition*>();
}

bool UFortChallengeBundleScheduleDefinition::DoesChallengeBundleScheduleExpire() const {
    return false;
}

UFortChallengeBundleScheduleDefinition::UFortChallengeBundleScheduleDefinition() {
    this->CleanUpOnBundleCompletion = false;
    this->bHideInLegacyAllChallengesEscapeMenu = false;
    this->bSeperateEachBundleForDisplay = false;
    this->SortPriority = 0;
    this->bHideCountdownFromMapChallenges = false;
    this->ItemType = EFortItemType::ChallengeBundleSchedule;
}

