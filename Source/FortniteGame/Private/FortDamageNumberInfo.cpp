#include "FortDamageNumberInfo.h"

FFortDamageNumberInfo::FFortDamageNumberInfo() {
    bIsCriticalDamage = false;
    Damage = 0;
    DamageNumberType = EFortDamageNumberType::None;
    VisualDamageScale = 1;
    ElementalDamageType = EFortElementalDamageType::None;
    ScoreType = EStatCategory::Combat;
    bAttachScoreNumberToPlayer = false;
    StaticMeshComponent = NULL;
}

