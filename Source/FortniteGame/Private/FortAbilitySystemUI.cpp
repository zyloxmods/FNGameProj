#include "FortAbilitySystemUI.h"
#include "Templates/SubclassOf.h"

FFortGameplayEffectDescription UFortAbilitySystemUI::GetStaticGameplayEffectDescription(const UGameplayEffect* Effect, float Level) {
    return FFortGameplayEffectDescription{};
}

UGameplayEffect* UFortAbilitySystemUI::GetDefaultObjectOfGameplayEffectType(TSubclassOf<UGameplayEffect> EffectType) {
    return NULL;
}

UFortAbilitySystemUI::UFortAbilitySystemUI() {
}

