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
    Level = 0;
    XP = 0;
    item_seen = 0;
    favorite = 0;
    max_level_bonus = 0;
    bIsPendingBeingMarkedAsSeen = false;
    bNeedsResolveMarkedAsSeen = false;
}

