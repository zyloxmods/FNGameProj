#include "FortControllerComponent_Collections.h"

void UFortControllerComponent_Collections::OnFishCollected(const FFortItemEntry& ItemEntry, const FFortMcpCollectedFishProperties& FishProperties, FGameplayTag& OutFishCollectionTag, FGameplayTag& OutAnalyticsTag, EFortCollectedState& OutNewSeenState) {
}

UFortControllerComponent_Collections* UFortControllerComponent_Collections::GetCollectionsComponent(const APawn* Pawn, ECollectionsComponentValidityResult& OutIsValid) {
    return NULL;
}

UFortControllerComponent_Collections::UFortControllerComponent_Collections() {
}

