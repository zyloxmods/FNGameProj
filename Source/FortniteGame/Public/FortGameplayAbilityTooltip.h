#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilitySpec.h"
#include "GameplayTagContainer.h"
#include "FortTooltip.h"
#include "FortGameplayAbilityTooltip.generated.h"

class UFortTooltipContext;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortGameplayAbilityTooltip : public UFortTooltip {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayAbilitySpec CachedSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayAbility* CachedAbilityInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTooltipContext* CachedContext;
    
public:
    UFortGameplayAbilityTooltip();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeAbilityInstanceInternal(const UGameplayAbility* AbilityInstance, const UFortTooltipContext* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InitializeAbilityInstance(const UGameplayAbility* AbilityInstance, const UFortTooltipContext* Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetTextForTokenFromAbilitySpecInternal(const FGameplayAbilitySpec& Spec, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTextForTokenFromAbilitySpec(const FGameplayAbilitySpec& Spec, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetTextForTokenFromAbilityInstanceInternal(const UGameplayAbility* AbilityInstance, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTextForTokenFromAbilityInstance(const UGameplayAbility* AbilityInstance, const FGameplayTag& Tag, const UFortTooltipContext* Context, const FGameplayTag& Token, FText& OutText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetApplicationTag(const UGameplayAbility* AbilityInstance, FGameplayTag& OutTag) const;
    
};

