#include "FortAccountItem.h"

void UFortAccountItem::MarkItemAsSeenBP() {
}

bool UFortAccountItem::IsRefundable() const {
    return false;
}

bool UFortAccountItem::IsFavorite() const {
    return false;
}

bool UFortAccountItem::HasBeenSeenLocally() const {
    return false;
}

TArray<FFortItemQuantityPair> UFortAccountItem::GetRefundResults() const {
    return TArray<FFortItemQuantityPair>();
}

TArray<FFortItemQuantityPair> UFortAccountItem::GetRecyclingRefunds() const {
    return TArray<FFortItemQuantityPair>();
}

UFortAccountItem::UFortAccountItem() {
    this->Level = 1;
    this->Xp = 0;
    this->item_seen = 0;
    this->favorite = 0;
    this->max_level_bonus = 0;
    this->bIsPendingBeingMarkedAsSeen = false;
    this->bNeedsResolveMarkedAsSeen = false;
}

