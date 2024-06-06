#include "FortTokenType.h"

UFortTokenType::UFortTokenType(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bPercentageRepresentation = false;
    ProfileType = EItemProfileType::Common;
    ItemType = EFortItemType::Token;
}

