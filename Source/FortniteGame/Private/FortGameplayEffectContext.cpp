#include "FortGameplayEffectContext.h"

FFortGameplayEffectContext::FFortGameplayEffectContext() {
    bIsFatalHit = false;
    bIsCriticalHit = false;
    bIsDiceCritical = false;
    bIsFullBodyHit = false;
    KnockbackMagnitude = 1;
    KnockbackZAngle = 1;
    StunTime = 1;
    TotalChargeTime = 1;
    ChargeMagnitude = 1;
    EffectDirectionX = 1;
    EffectDirectionY = 1;
    CartridgeID = 0;
    SourceLevel = 1;
    UnmodifiedDamage = 1;
}

