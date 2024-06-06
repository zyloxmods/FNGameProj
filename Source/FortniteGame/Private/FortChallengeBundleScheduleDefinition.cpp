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

UFortChallengeBundleScheduleDefinition::UFortChallengeBundleScheduleDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    CleanUpOnBundleCompletion = false;
    bHideInLegacyAllChallengesEscapeMenu = false;
    bSeperateEachBundleForDisplay = false;
    SortPriority = 0;
    bHideCountdownFromMapChallenges = false;
    ItemType = EFortItemType::ChallengeBundleSchedule;
}

