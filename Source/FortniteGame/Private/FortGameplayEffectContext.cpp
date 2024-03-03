#include "FortGameplayEffectContext.h"

FFortGameplayEffectContext::FFortGameplayEffectContext() {
    this->bIsFatalHit = false;
    this->bIsCriticalHit = false;
    this->bIsDiceCritical = false;
    this->bIsFullBodyHit = false;
    this->KnockbackMagnitude = 1;
    this->KnockbackZAngle = 1;
    this->StunTime = 1;
    this->TotalChargeTime = 1;
    this->ChargeMagnitude = 1;
    this->EffectDirectionX = 1;
    this->EffectDirectionY = 1;
    this->CartridgeID = 0;
    this->SourceLevel = 1;
    this->UnmodifiedDamage = 1;
}

