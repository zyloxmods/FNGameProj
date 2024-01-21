#include "FortGameplayCueSpawnCondition.h"

FFortGameplayCueSpawnCondition::FFortGameplayCueSpawnCondition() {
    this->SourceCondition = EFortGameplayCueSourceCondition::AnySource;
    this->ChanceToPlay = 0.00f;
    this->Significance = EParticleSignificanceLevel::Low;
    this->RequiredDetailMode = 0;
    this->bRequireVisible = false;
}

