#include "FortDamageNumberInfo.h"

FFortDamageNumberInfo::FFortDamageNumberInfo() {
    this->bIsCriticalDamage = false;
    this->Damage = 0;
    this->DamageNumberType = EFortDamageNumberType::None;
    this->VisualDamageScale = 0.00f;
    this->ElementalDamageType = EFortElementalDamageType::None;
    this->ScoreType = EStatCategory::Combat;
    this->bAttachScoreNumberToPlayer = false;
    this->StaticMeshComponent = NULL;
}

