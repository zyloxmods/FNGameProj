#include "FortAthenaBTService_PickUpLoot.h"

UFortAthenaBTService_PickUpLoot::UFortAthenaBTService_PickUpLoot() {
    this->bPickUpOnlyGoalLoot = false;
    this->LootObjectKeyName = TEXT("AIEvaluator_Loot_Object");
    this->ExecutionStatusName = TEXT("AIEvaluator_Loot_ExecutionStatus");
}

