#include "WeaponHitNotifyAudioBank.h"

UWeaponHitNotifyAudioBank::UWeaponHitNotifyAudioBank() {
    this->SoundBody = NULL;
    this->SoundCrit = NULL;
    this->SoundShield = NULL;
    this->SoundDeath = NULL;
    this->SoundDeathCrit = NULL;
    this->SoundBodyReceive = NULL;
    this->SoundCritReceive = NULL;
    this->SoundDeathReceive = NULL;
    this->SoundDeathCritReceive = NULL;
    this->SoundFallReceive = NULL;
    this->SoundFallDeathReceive = NULL;
}

