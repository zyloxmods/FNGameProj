#include "FortItemTileView.h"

UFortItemTileView::UFortItemTileView() {
    this->bShouldShowNullItemListEntry = false;
    this->bAutomaticallyLoadItemDetails = false;
    this->DisplayType = EItemListViewDisplayType::World;
    this->bShouldOverrideChildItemWidgetCardSize = false;
    this->ChildItemWidgetCardSizeOverride = EFortItemCardSize::XXS;
    this->ChildCosmeticItemCardWidthOverride = 1;
}

