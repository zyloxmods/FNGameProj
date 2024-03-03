#include "ContentBrowserFilterEntry.h"


void UContentBrowserFilterEntry::UpdateButtonText() {
}

void UContentBrowserFilterEntry::SetIsFilterActive(bool bInFilterActive) {
}

bool UContentBrowserFilterEntry::IsFilterActive() const {
    return false;
}

UContentBrowserFilterEntry::UContentBrowserFilterEntry() {
    this->TextBlock_FilterName = NULL;
    this->bFilterActive = false;
    this->Tag = NULL;
}

