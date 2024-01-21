#include "FortAthenaBTService_ManageWeapon.h"

UFortAthenaBTService_ManageWeapon::UFortAthenaBTService_ManageWeapon() {
    this->RangeAttackExecutionStatusName = TEXT("AIEvaluator_RangeAttack_ExecutionStatus");
    this->MeleeAttackExecutionStatusName = TEXT("AIEvaluator_MeleeAttack_ExecutionStatus");
    this->WeaponName = TEXT("AIEvaluator_Global_DesiredWeapon");
    this->WeaponFireName = TEXT("AIEvaluator_Attack_FireWeapon");
    this->ReloadName = TEXT("AIEvaluator_RangeAttack_ReloadWeapon");
}

