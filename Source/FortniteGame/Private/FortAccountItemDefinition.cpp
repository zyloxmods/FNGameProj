#include "FortAccountItemDefinition.h"

UFortAccountItemDefinition::UFortAccountItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    MinLevel = 0;
    MaxLevel = 0;
    GrantToProfileType = TEXT("campaign");
}

