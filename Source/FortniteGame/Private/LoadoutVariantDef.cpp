#include "LoadoutVariantDef.h"

FLoadoutVariantDef::FLoadoutVariantDef() {
    this->LocationToInsert = ELoadoutVariantInsertType::StartOfArray;
    this->bItemExpectedInLoadout = false;
    this->bRequireItemToBeCurrent = false;
    this->bIgnoreRequireItemToBeCurrentInFrontEnd = false;
}

