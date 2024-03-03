#include "OutpostPOSTRequirementData.h"

UOutpostPOSTRequirementData::UOutpostPOSTRequirementData() {
    this->RequirementItemDefinition = NULL;
    this->TotalRequired = 0;
    this->AlreadyDeposited = 0;
    this->AmountOwned = 0;
    this->bHasEnough = false;
    this->AmountToDeposit = 0;
}

