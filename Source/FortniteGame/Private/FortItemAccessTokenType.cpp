#include "FortItemAccessTokenType.h"

FText UFortItemAccessTokenType::GetUnlockDescription() const {
    return FText::GetEmpty();
}

UFortItemDefinition* UFortItemAccessTokenType::GetAccessItem() const {
    return NULL;
}

UFortItemAccessTokenType::UFortItemAccessTokenType(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ProfileType = EItemProfileType::Common;
    access_item = NULL;
}

