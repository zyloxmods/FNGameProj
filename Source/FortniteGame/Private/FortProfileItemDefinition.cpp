#include "FortProfileItemDefinition.h"

UFortProfileItemDefinition::UFortProfileItemDefinition() {
    this->bCanBeFavorite = true;
    this->bCanBeMarkedSeen = true;
    this->GrantToProfileType = TEXT("campaign");
}

