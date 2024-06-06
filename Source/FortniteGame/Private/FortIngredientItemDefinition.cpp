#include "FortIngredientItemDefinition.h"

UFortIngredientItemDefinition::UFortIngredientItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
	ItemType = EFortItemType::Ingredient;
}

