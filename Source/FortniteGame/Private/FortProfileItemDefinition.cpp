#include "FortProfileItemDefinition.h"

UFortProfileItemDefinition::UFortProfileItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bCanBeFavorite = true;
    bCanBeMarkedSeen = true;
    GrantToProfileType = TEXT("campaign");
}

