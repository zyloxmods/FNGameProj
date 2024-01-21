#include "FortAlterationOptionsBase.h"

void UFortAlterationOptionsBase::ProcessAlterationOptions(bool bIntroAlterations) {
}



bool UFortAlterationOptionsBase::IsValidAlterationSlot() const {
    return false;
}

void UFortAlterationOptionsBase::HandleAlterationsOptionSelected(UCommonButton* AlterationOptionButton, int32 GroupIndex) {
}

void UFortAlterationOptionsBase::HandleAlterationsOptionHovered(UCommonButton* AlterationOptionButton, int32 GroupIndex) {
}

bool UFortAlterationOptionsBase::DoAlterationOptionsExist(EFortAlterationOptionType OptionType) const {
    return false;
}

UFortAlterationOptionsBase::UFortAlterationOptionsBase() {
    this->AlterationOptionClass = NULL;
    this->AlterationOptionButtons = NULL;
    this->Item = NULL;
    this->SlotIndex = 0;
    this->bUpgradeOptionExists = false;
}

