#include "FortUIManagerWidget_Campaign.h"

UFortUINavigationManager* UFortUIManagerWidget_Campaign::GetUINavigationManager(UObject* WorldContextObject) {
    return NULL;
}

UFortUINavigationManager* UFortUIManagerWidget_Campaign::GetNavigationManager() const {
    return NULL;
}

UFortUIManagerWidget_Campaign::UFortUIManagerWidget_Campaign() {
    this->NavigationManager = NULL;
}

