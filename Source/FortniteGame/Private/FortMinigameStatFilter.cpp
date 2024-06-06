#include "FortMinigameStatFilter.h"

bool UFortMinigameStatFilter::Matches_Implementation(EFortQuestObjectiveStatEvent InStatEvent, UObject* InTargetObject, AFortPlayerController* InPlayerController, const FGameplayTagContainer& InTargetTags, const FGameplayTagContainer& InSourceTags, const FGameplayTagContainer& InContextTags) const {
    return false;
}

FText UFortMinigameStatFilter::FormatStat_Implementation(int32 InCount) const {
    return FText::GetEmpty();
}

int32 UFortMinigameStatFilter::Compare_Implementation(int32 FirstScore, int32 SecondScore) const {
    return 0;
}

int32 UFortMinigameStatFilter::Accumulate_Implementation(int32 A, int32 B) const {
    return 0;
}

UFortMinigameStatFilter::UFortMinigameStatFilter() {
    StatEvent = EFortQuestObjectiveStatEvent::Kill;
    ItemEvent = EFortQuestObjectiveItemEvent::Craft;
    bAccumulates = true;
}

