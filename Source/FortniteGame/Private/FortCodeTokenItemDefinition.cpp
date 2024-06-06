#include "FortCodeTokenItemDefinition.h"

UFortCodeTokenItemDefinition::UFortCodeTokenItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    AllowedPlatforms.AddDefaulted(2);
    ProfileType = EItemProfileType::Common;
    ItemType = EFortItemType::CodeToken;
}

