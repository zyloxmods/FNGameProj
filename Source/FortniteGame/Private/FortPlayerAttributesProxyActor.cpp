#include "FortPlayerAttributesProxyActor.h"
#include "FortAbilitySystemComponent.h"

AFortPlayerAttributesProxyActor::AFortPlayerAttributesProxyActor() {
    AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

