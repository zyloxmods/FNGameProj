#include "FortGlobalEnvironmentAbilityActor.h"
#include "FortAbilitySystemComponent.h"
#include "FortDamageSet.h"

AFortGlobalEnvironmentAbilityActor::AFortGlobalEnvironmentAbilityActor() {
    AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
}

