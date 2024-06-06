#include "FortAIProxyActor.h"
#include "FortAbilitySystemComponent.h"
#include "FortDamageSet.h"
#include "FortMovementSet.h"
#include "FortRegenHealthSet.h"

AFortAIProxyActor::AFortAIProxyActor() {
    PrimaryPhysicalSurface = SurfaceType_Default;
    HealthSet = CreateDefaultSubobject<UFortRegenHealthSet>(TEXT("HealthSet"));
    DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
    MovementSet = CreateDefaultSubobject<UFortMovementSet>(TEXT("MovementSet"));
    AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    BaseWeaponDamageResponseType = EFortBaseWeaponDamage::Combat;
}

