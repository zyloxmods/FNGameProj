#include "FortAIProxyActor.h"
#include "FortAbilitySystemComponent.h"
#include "FortDamageSet.h"
#include "FortMovementSet.h"
#include "FortRegenHealthSet.h"

AFortAIProxyActor::AFortAIProxyActor() {
    this->PrimaryPhysicalSurface = SurfaceType_Default;
    this->HealthSet = CreateDefaultSubobject<UFortRegenHealthSet>(TEXT("HealthSet"));
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    this->MovementSet = CreateDefaultSubobject<UFortMovementSet>(TEXT("MovementSet"));
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->BaseWeaponDamageResponseType = EFortBaseWeaponDamage::Combat;
}

