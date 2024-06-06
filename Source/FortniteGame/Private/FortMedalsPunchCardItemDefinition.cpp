#include "FortMedalsPunchCardItemDefinition.h"

UFortMedalsPunchCardItemDefinition::UFortMedalsPunchCardItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    NumPunches = 0;
    bAllowMedalReplacement = false;
    ItemType = EFortItemType::MedalsPunchCard;
}

