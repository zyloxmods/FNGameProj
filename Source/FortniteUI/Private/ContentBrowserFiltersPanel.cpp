#include "ContentBrowserFiltersPanel.h"

void UContentBrowserFiltersPanel::HandleShowAll(bool bShowAllItems, UObject* ListItemObject) {
}

void UContentBrowserFiltersPanel::HandleSearchTextChanged(const FText& Text) {
}

void UContentBrowserFiltersPanel::HandleFilterSelected(bool bIsFilterEnabled, UContentBrowserFilterEntry* Entry) {
}

void UContentBrowserFiltersPanel::HandleFilterEnabled(bool bIsFilterEnabled, UObject* ListItemObject) {
}

int32 UContentBrowserFiltersPanel::GetFilterCount() const {
    return 0;
}

UContentBrowserFiltersPanel::UContentBrowserFiltersPanel() {
    this->FilterEntryWidgetClass = NULL;
    this->Box_Filters = NULL;
    this->ScrollBox_FilterScroll = NULL;
    this->Button_All = NULL;
    this->SearchPanel = NULL;
}

