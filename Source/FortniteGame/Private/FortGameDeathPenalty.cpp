#include "FortGameDeathPenalty.h"

UFortGameDeathPenalty::UFortGameDeathPenalty() {
    this->PercentResourcesToDrop = 1;
    this->PercentWeaponsToDrop = 1;
    this->PercentCraftingIngredientsToDrop = 1;
    this->PercentConsumablesToDrop = 1;
    this->PercentAmmoToDrop = 1;
    this->PercentResourcesToRecover = 1;
    this->PercentWeaponsToRecover = 1;
    this->PercentCraftingIngredientsToRecover = 1;
    this->PercentConsumablesToRecover = 1;
    this->PercentAmmoToRecover = 1;
    this->MinResourcesToKeep = 0;
    this->MinWeaponsToKeep = 0;
    this->MinCraftingIngredientsToKeep = 0;
    this->MinConsumablesToKeep = 0;
    this->MinAmmoToKeep = 0;
    this->RespawnDelayOverTime = NULL;
    this->MaxRespawnDelay = 1;
    this->MinSelfResurrectDelay = 1;
    this->bUseRegenHealthOnRespawn = false;
    this->PercentHealthOnRespawn = 1;
    this->PercentShieldOnRespawn = 1;
    this->PercentStaminaOnRespawn = 1;
    this->RespawnDurabilityPenalty = 1;
    this->SelfResurrectDurabilityPenalty = 1;
    this->TeammateResurrectDurabilityPenalty = 1;
}

