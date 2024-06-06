#include "FortCurrencyItemDefinition.h"

UFortCurrencyItemDefinition::UFortCurrencyItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
	ItemType = EFortItemType::Currency;
}

