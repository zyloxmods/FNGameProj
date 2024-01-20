#include "FortGameplayEffectContext.h"

FFortGameplayEffectContext::FFortGameplayEffectContext() {
    this->bIsFatalHit = false;
    this->bIsCriticalHit = false;
    this->bIsDiceCritical = false;
    this->bIsFullBodyHit = false;
    this->KnockbackMagnitude = 0.00f;
    this->KnockbackZAngle = 0.00f;
    this->StunTime = 0.00f;
    this->ChargeMagnitude = 0.00f;
    this->EffectDirectionX = 0.00f;
    this->EffectDirectionY = 0.00f;
    this->CartridgeID = 0;
    this->SourceLevel = 0.00f;
    this->UnmodifiedDamage = 0.00f;
}

