#include "FortItemListView.h"

UFortItemListView::UFortItemListView() {
    this->bShouldShowNullItemListEntry = false;
    this->bAutomaticallyLoadItemDetails = false;
    this->DisplayType = EItemListViewDisplayType::World;
}

