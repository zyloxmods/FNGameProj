#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"
#include "AttributeInfo.h"
#include "EFortSharedAnimationState.h"
#include "GameplayAbilityRepSharedAnim.h"
#include "ReplicatedMontagePair.h"
#include "FortAbilitySystemComponent.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAbilitySystemComponent : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FReplicatedMontagePair LandingMontagePair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SharedAnim, meta=(AllowPrivateAccess=true))
    FGameplayAbilityRepSharedAnim RepSharedAnimInfo;
    
public:
    UFortAbilitySystemComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSharedAnimStateWithMontage(EFortSharedAnimationState State, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void SetSharedAnimState(EFortSharedAnimationState State);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetLandingMontageReplication(UAnimMontage* Montage1, FName Section1, UAnimMontage* Montage2, FName Section2);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SharedAnim();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMulticast_RefreshActiveGameplayEffectCueEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveAbilityWithAnyMatchingTag(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttributeMagnitude(const FAttributeInfo Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAttributeInfo FindAttributeInformation(const FString& AttributeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivateAbilityWithMatchingTag(FGameplayTagContainer GameplayAbilityTags) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_UnBlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintCallable)
    void BP_BlockAbilitiesWithTags(const FGameplayTagContainer& Tags);
    
};

