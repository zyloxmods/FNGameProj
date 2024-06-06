#include "FortGameDeathPenalty.h"

UFortGameDeathPenalty::UFortGameDeathPenalty() {
    PercentResourcesToDrop = 1;
    PercentWeaponsToDrop = 1;
    PercentCraftingIngredientsToDrop = 1;
    PercentConsumablesToDrop = 1;
    PercentAmmoToDrop = 1;
    PercentResourcesToRecover = 1;
    PercentWeaponsToRecover = 1;
    PercentCraftingIngredientsToRecover = 1;
    PercentConsumablesToRecover = 1;
    PercentAmmoToRecover = 1;
    MinResourcesToKeep = 0;
    MinWeaponsToKeep = 0;
    MinCraftingIngredientsToKeep = 0;
    MinConsumablesToKeep = 0;
    MinAmmoToKeep = 0;
    RespawnDelayOverTime = NULL;
    MaxRespawnDelay = 1;
    MinSelfResurrectDelay = 1;
    bUseRegenHealthOnRespawn = false;
    PercentHealthOnRespawn = 1;
    PercentShieldOnRespawn = 1;
    PercentStaminaOnRespawn = 1;
    RespawnDurabilityPenalty = 1;
    SelfResurrectDurabilityPenalty = 1;
    TeammateResurrectDurabilityPenalty = 1;
}

