#include "BuildingPhoenixRepairActor.h"

void ABuildingPhoenixRepairActor::GetWeaponRepairRecipe(AFortPlayerController* FPC, FRecipe& OutRecipe) const {
}

bool ABuildingPhoenixRepairActor::GetWeaponHasDurability(UFortWorldItem* WeaponItem) const {
    return false;
}

UFortWorldItem* ABuildingPhoenixRepairActor::GetCurrentWeapon(AFortPlayerController* FPC) const {
    return NULL;
}

bool ABuildingPhoenixRepairActor::CanWeaponBeRepaired(UFortWorldItem* WeaponItem) const {
    return false;
}

ABuildingPhoenixRepairActor::ABuildingPhoenixRepairActor() {
    this->bCallOnLocalInteract = false;
    this->bCurrentInteractionSuccess = false;
    this->RepairedWeaponRarity = EFortRarity::Common;
}

