#include "FortAlterationItemDefinition.h"

TEnumAsByte<EFortAlteration::Type> UFortAlterationItemDefinition::GetAlterationType() const {
    return EFortAlteration::AttributeSlot;
}

UFortAlterationItemDefinition::UFortAlterationItemDefinition() {
    this->AlterationType = EFortAlteration::AttributeSlot;
}

