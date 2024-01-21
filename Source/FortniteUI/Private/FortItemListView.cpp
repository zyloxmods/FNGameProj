#include "FortItemListView.h"

UFortItemListView::UFortItemListView() {
    this->bShouldShowNullItemListEntry = false;
    this->bAutomaticallyLoadItemDetails = false;
    this->bLoadItemDetailsBeforeSortingItems = false;
    this->DisplayType = EItemListViewDisplayType::World;
}

