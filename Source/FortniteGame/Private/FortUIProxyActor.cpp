#include "FortUIProxyActor.h"
#include "FortAbilitySystemComponent.h"

AFortUIProxyActor::AFortUIProxyActor() {
    AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    ItemDef = NULL;
}

