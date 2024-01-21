#include "OutpostPOSTRequirementData.h"

UOutpostPOSTRequirementData::UOutpostPOSTRequirementData() {
    this->RequirementItemDefinition = NULL;
    this->TotalRequired = -1;
    this->AlreadyDeposited = -1;
    this->AmountOwned = -1;
    this->bHasEnough = false;
    this->AmountToDeposit = 0;
}

