#include "FortAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void UFortAbilitySystemComponent::SetSharedAnimStateWithMontage(EFortSharedAnimationState State, UAnimMontage* Montage) {
}

void UFortAbilitySystemComponent::SetSharedAnimState(EFortSharedAnimationState State) {
}

void UFortAbilitySystemComponent::SetLandingMontageReplication(UAnimMontage* Montage1, FName Section1, UAnimMontage* Montage2, FName Section2) {
}

int32 UFortAbilitySystemComponent::RemoveActiveEffectsWithTagsAndSource(FGameplayTagContainer Tags, UObject* Source) {
    return 0;
}

void UFortAbilitySystemComponent::OnRep_SharedAnim() {
}

void UFortAbilitySystemComponent::NetMulticast_RefreshActiveGameplayEffectCueEvents_Implementation() {
}

FGameplayEffectContextHandle UFortAbilitySystemComponent::MakeFortEffectContext(UObject* SourceObject, AActor* EffectCauser, AActor* DamageSource, const int32 GameplayEffectLevel) const {
    return FGameplayEffectContextHandle{};
}

bool UFortAbilitySystemComponent::HasActiveAbilityWithAnyMatchingTag(FGameplayTagContainer Tags) const {
    return false;
}

float UFortAbilitySystemComponent::GetAttributeMagnitude(const FAttributeInfo Info) const {
    return 0.0f;
}

TArray<FActiveGameplayEffectHandle> UFortAbilitySystemComponent::GetActiveEffectsWithAllTagsAndSource(FGameplayTagContainer Tags, UObject* Source) const {
    return TArray<FActiveGameplayEffectHandle>();
}

FAttributeInfo UFortAbilitySystemComponent::FindAttributeInformation(const FString& AttributeName) const {
    return FAttributeInfo{};
}

bool UFortAbilitySystemComponent::CanActivateAbilityWithMatchingTag(FGameplayTagContainer GameplayAbilityTags) const {
    return false;
}

void UFortAbilitySystemComponent::BP_UnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags) {
}

FActiveGameplayEffectHandle UFortAbilitySystemComponent::BP_FortApplyGameplayEffectToTarget(TSubclassOf<UGameplayEffect> GameplayEffectClass, UAbilitySystemComponent* TargetOfEffect, UObject* OptionalSourceObject, AActor* OptionalEffectCauser, AActor* OptionalDamageSource, float Level, FGameplayEffectContextHandle EffectContext) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle UFortAbilitySystemComponent::BP_FortApplyGameplayEffectToSelf(TSubclassOf<UGameplayEffect> GameplayEffectClass, UObject* OptionalSourceObject, AActor* OptionalEffectCauser, AActor* OptionalDamageSource, float Level, FGameplayEffectContextHandle EffectContext) {
    return FActiveGameplayEffectHandle{};
}

void UFortAbilitySystemComponent::BP_CancelAbilitiesWithTags(const FGameplayTagContainer& Tags) {
}

void UFortAbilitySystemComponent::BP_BlockAbilitiesWithTags(const FGameplayTagContainer& Tags) {
}

void UFortAbilitySystemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAbilitySystemComponent, LandingMontagePair);
    DOREPLIFETIME(UFortAbilitySystemComponent, RepSharedAnimInfo);
}

UFortAbilitySystemComponent::UFortAbilitySystemComponent() {
}

