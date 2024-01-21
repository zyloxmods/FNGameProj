#include "FortAbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAbilitySystemComponent::SetSharedAnimStateWithMontage(EFortSharedAnimationState State, UAnimMontage* Montage) {
}

void UFortAbilitySystemComponent::SetSharedAnimState(EFortSharedAnimationState State) {
}

void UFortAbilitySystemComponent::SetLandingMontageReplication(UAnimMontage* Montage1, FName Section1, UAnimMontage* Montage2, FName Section2) {
}

void UFortAbilitySystemComponent::OnRep_SharedAnim() {
}

void UFortAbilitySystemComponent::NetMulticast_RefreshActiveGameplayEffectCueEvents_Implementation() {
}

bool UFortAbilitySystemComponent::HasActiveAbilityWithAnyMatchingTag(FGameplayTagContainer Tags) const {
    return false;
}

float UFortAbilitySystemComponent::GetAttributeMagnitude(const FAttributeInfo Info) const {
    return 0.0f;
}

FAttributeInfo UFortAbilitySystemComponent::FindAttributeInformation(const FString& AttributeName) const {
    return FAttributeInfo{};
}

bool UFortAbilitySystemComponent::CanActivateAbilityWithMatchingTag(FGameplayTagContainer GameplayAbilityTags) const {
    return false;
}

void UFortAbilitySystemComponent::BP_UnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags) {
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

