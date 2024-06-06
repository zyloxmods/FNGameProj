#include "FortGameplayCueSpawnCondition.h"

FFortGameplayCueSpawnCondition::FFortGameplayCueSpawnCondition() {
    SourceCondition = EFortGameplayCueSourceCondition::AnySource;
    ChanceToPlay = 1;
    Significance = EParticleSignificanceLevel::Low;
    RequiredDetailMode = 0;
    bRequireVisible = false;
}

