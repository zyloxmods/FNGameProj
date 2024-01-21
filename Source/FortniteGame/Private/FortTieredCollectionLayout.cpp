#include "FortTieredCollectionLayout.h"

bool UFortTieredCollectionLayout::ShouldUseTierAsRandomSeed() const {
    return false;
}

int32 UFortTieredCollectionLayout::GetMissionPointsForTier(int32 Tier) const {
    return 0;
}

FText UFortTieredCollectionLayout::GetCollectionLayoutDisplayName() const {
    return FText::GetEmpty();
}

UFortTieredCollectionLayout::UFortTieredCollectionLayout() {
    this->bUseTierAsRandomSeed = true;
    this->bFiniteTiers = true;
    this->MaxNumberOfTiersAllowed = 0;
    this->InitialTierUnlocked = -1;
}

