#include "FortItemAccessTokenType.h"

FText UFortItemAccessTokenType::GetUnlockDescription() const {
    return FText::GetEmpty();
}

UFortItemDefinition* UFortItemAccessTokenType::GetAccessItem() const {
    return NULL;
}

UFortItemAccessTokenType::UFortItemAccessTokenType() {
    this->ProfileType = EItemProfileType::Common;
    this->access_item = NULL;
}

