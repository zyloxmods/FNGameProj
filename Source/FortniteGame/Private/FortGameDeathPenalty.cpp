#include "FortGameDeathPenalty.h"

UFortGameDeathPenalty::UFortGameDeathPenalty() {
    this->PercentResourcesToDrop = 0.00f;
    this->PercentWeaponsToDrop = 0.00f;
    this->PercentCraftingIngredientsToDrop = 0.00f;
    this->PercentConsumablesToDrop = 0.00f;
    this->PercentAmmoToDrop = 0.00f;
    this->PercentResourcesToRecover = 1.00f;
    this->PercentWeaponsToRecover = 1.00f;
    this->PercentCraftingIngredientsToRecover = 1.00f;
    this->PercentConsumablesToRecover = 1.00f;
    this->PercentAmmoToRecover = 1.00f;
    this->MinResourcesToKeep = 0;
    this->MinWeaponsToKeep = 0;
    this->MinCraftingIngredientsToKeep = 0;
    this->MinConsumablesToKeep = 0;
    this->MinAmmoToKeep = 0;
    this->RespawnDelayOverTime = NULL;
    this->MaxRespawnDelay = 30.00f;
    this->MinSelfResurrectDelay = 10.00f;
    this->bUseRegenHealthOnRespawn = false;
    this->PercentHealthOnRespawn = 1.00f;
    this->PercentStaminaOnRespawn = 1.00f;
    this->RespawnDurabilityPenalty = 0.15f;
    this->SelfResurrectDurabilityPenalty = 0.05f;
    this->TeammateResurrectDurabilityPenalty = 0.05f;
}

