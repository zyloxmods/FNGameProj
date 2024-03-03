#include "FortAthenaMutator_OnDmgDamageSelf.h"

AFortAthenaMutator_OnDmgDamageSelf::AFortAthenaMutator_OnDmgDamageSelf() {
    this->DamageToDeal = 1;
    this->bRequiresNonZeroDamage = true;
    this->TargetQueryIndex = 0;
    this->WeaponQueryIndex = 0;
}

