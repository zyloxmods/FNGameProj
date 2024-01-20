#include "FortUINavigationOperation.h"

FFortUINavigationOperation::FFortUINavigationOperation() {
    this->Operation = EFortUINavigationOp::PopContentStack;
    this->SquadSlotIndex = 0;
    this->Item = NULL;
    this->Feature = EFortUIFeature::ShowHome;
    this->ItemManagementFilter = EFortFrontendInventoryFilter::Schematics;
}

