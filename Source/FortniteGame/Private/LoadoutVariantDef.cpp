#include "LoadoutVariantDef.h"

FLoadoutVariantDef::FLoadoutVariantDef() {
    LocationToInsert = ELoadoutVariantInsertType::StartOfArray;
    bItemExpectedInLoadout = false;
    bRequireItemToBeCurrent = false;
    bIgnoreRequireItemToBeCurrentInFrontEnd = false;
}

