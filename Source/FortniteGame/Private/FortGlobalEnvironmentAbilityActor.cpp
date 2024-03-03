#include "FortGlobalEnvironmentAbilityActor.h"
#include "FortAbilitySystemComponent.h"
#include "FortDamageSet.h"

AFortGlobalEnvironmentAbilityActor::AFortGlobalEnvironmentAbilityActor() {
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->DamageSet = CreateDefaultSubobject<UFortDamageSet>(TEXT("DamageSet"));
}

