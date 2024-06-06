#include "FortAthenaMutator_OnDmgDamageSelf.h"

AFortAthenaMutator_OnDmgDamageSelf::AFortAthenaMutator_OnDmgDamageSelf() {
    DamageToDeal = 1;
    bRequiresNonZeroDamage = true;
    TargetQueryIndex = 0;
    WeaponQueryIndex = 0;
}

