#include "FortPlayerAttributesProxyActor.h"
#include "FortAbilitySystemComponent.h"

AFortPlayerAttributesProxyActor::AFortPlayerAttributesProxyActor() {
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

