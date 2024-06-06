#include "FortAthenaBTService_ManageWeapon.h"

void UFortAthenaBTService_ManageWeapon::ManageWeaponTargeting(UBehaviorTreeComponent* OwnerComp) const {
}

UFortAthenaBTService_ManageWeapon::UFortAthenaBTService_ManageWeapon() {
    WeaponFireName = TEXT("AIEvaluator_WeaponFire_ExecutionStatus");
    WeaponTriggerMeleeName = TEXT("AIEvaluator_WeaponTriggerMelee_ExecutionStatus");
    WeaponReloadName = TEXT("AIEvaluator_WeaponReload_ExecutionStatus");
    WeaponName = TEXT("AIEvaluator_Global_DesiredWeapon");
    WeaponTargetingName = TEXT("AIEvaluator_WeaponTargeting_ExecutionStatus");
    SprintExecutionStatusName = TEXT("AIEvaluator_Sprinting_ExecutionStatus");
}

