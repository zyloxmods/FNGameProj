#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayEffectTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "FortAbilitySystemBlueprintLibrary.generated.h"

class AActor;
class UAbilitySystemComponent;
class UFortAbilitySystemComponent;
class UGameplayAbility;
class UObject;

UCLASS(Blueprintable)
class UFortAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortAbilitySystemBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static bool IsCooldownTagsActive(AActor* Actor, FGameplayTagContainer CooldownTags);
    
    UFUNCTION(BlueprintCallable)
    static void GrantAndActivateAbilityOnSelf(UAbilitySystemComponent* AbilitySystem, const TSubclassOf<UGameplayAbility>& AbilityToGrant, UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFortAbilitySystemComponent* GetFortAbilitySystemComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GetCooldownTimeRemainingAndDuration(AActor* Actor, FGameplayTagContainer CooldownTags, float& TimeRemaining, float& CooldownDuration);
    
    UFUNCTION(BlueprintCallable)
    static float GetCooldownTimeRemaining(AActor* Actor, FGameplayTagContainer CooldownTags);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAbilitySystemDebugInfo(AActor* DebugActor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterTargetsInCone(const AActor* SourceActor, const TArray<AActor*>& ActorsToCheck, const FVector& ConeStart, const FVector& ConeEnd, const float ConeRadius, FGameplayTagContainer ExcludeFromObstructionTags, bool bShouldCheckLos);
    
    UFUNCTION(BlueprintCallable)
    static void EffectContextSetCritical(FGameplayEffectContextHandle EffectContext, bool bInCritical);
    
    UFUNCTION(BlueprintCallable)
    static void AssignActiveGameplayEffectTagSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag DataTag, float Magnitude);
    
    UFUNCTION(BlueprintCallable)
    static void AssignActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FName DataName, float Magnitude);
    
};

