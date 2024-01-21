#include "AthenaMusicPackItemDefinition.h"

TSoftObjectPtr<UTexture2D> UAthenaMusicPackItemDefinition::GetCoverArt() const {
    return NULL;
}

UAthenaMusicPackItemDefinition::UAthenaMusicPackItemDefinition() {
    ItemType = EFortItemType::AthenaMusicPack;
}

