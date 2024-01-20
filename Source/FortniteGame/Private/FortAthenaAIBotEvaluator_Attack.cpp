#include "FortAthenaAIBotEvaluator_Attack.h"

UFortAthenaAIBotEvaluator_Attack::UFortAthenaAIBotEvaluator_Attack() {
    this->WeaponKeyName = TEXT("AIEvaluator_Global_DesiredWeapon");
    this->Weapon = NULL;
    this->DestinationKeyName = TEXT("AIEvaluator_Attack_Destination");
    this->WeaponFireName = TEXT("AIEvaluator_Attack_FireWeapon");
}

