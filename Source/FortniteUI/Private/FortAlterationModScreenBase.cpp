#include "FortAlterationModScreenBase.h"

void UFortAlterationModScreenBase::SetItemForAlterationsModding(UFortAlterableItem* InAlterableItem) {
}







void UFortAlterationModScreenBase::HandleBackAction(bool& bPassThrough) {
}

void UFortAlterationModScreenBase::ConfirmSelection() {
}

void UFortAlterationModScreenBase::CancelSelection() {
}

bool UFortAlterationModScreenBase::AreIngredientRequirementsMent(const TArray<FFortItemQuantityPair>& RequiredIngredients) {
    return false;
}

UFortAlterationModScreenBase::UFortAlterationModScreenBase() {
    this->AlterationsToEdit = NULL;
    this->AlterationSlotOptions = NULL;
    this->ItemInspectionMainItemDetailsHostPanel = NULL;
    this->AlterationsExtraDetailsPanel = NULL;
    this->AlterationModOptinScreenClass = NULL;
    this->CurrentAlterationOptionInternal = NULL;
}

