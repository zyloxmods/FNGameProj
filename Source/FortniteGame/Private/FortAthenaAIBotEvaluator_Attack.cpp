#include "FortAthenaAIBotEvaluator_Attack.h"

UFortAthenaAIBotEvaluator_Attack::UFortAthenaAIBotEvaluator_Attack() {
    WeaponKeyName = TEXT("AIEvaluator_Global_DesiredWeapon");
    Weapon = NULL;
    DestinationKeyName = TEXT("AIEvaluator_Attack_Destination");
    MoveToDestinationKeyName = TEXT("AIEvaluator_Attack_MoveToDestination");
}

