#include "FortUIProxyActor.h"
#include "FortAbilitySystemComponent.h"

AFortUIProxyActor::AFortUIProxyActor() {
    this->AbilitySystemComponent = CreateDefaultSubobject<UFortAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->ItemDef = NULL;
}

