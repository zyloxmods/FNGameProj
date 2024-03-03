#include "FortAthenaBTService_ManageWeapon.h"

void UFortAthenaBTService_ManageWeapon::ManageWeaponTargeting(UBehaviorTreeComponent* OwnerComp) const {
}

UFortAthenaBTService_ManageWeapon::UFortAthenaBTService_ManageWeapon() {
    this->WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    this->WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    this->WeaponReloadName = TEXT("AIEvaluator_WeaponReload_ExecutionStatus");
    this->WeaponName = TEXT("AIEvaluator_Global_DesiredWeapon");
    this->WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    this->SprintExecutionStatusName = TEXT("AIEvaluator_Sprinting_ExecutionStatus");
}

