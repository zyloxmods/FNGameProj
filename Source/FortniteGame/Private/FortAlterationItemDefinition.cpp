#include "FortAlterationItemDefinition.h"

TEnumAsByte<EFortAlteration::Type> UFortAlterationItemDefinition::GetAlterationType() const {
    return EFortAlteration::AttributeSlot;
}

UFortAlterationItemDefinition::UFortAlterationItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    AlterationType = EFortAlteration::AttributeSlot;
    ItemType = EFortItemType::Alteration;
}

