#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "FortAbilitySetHandle.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FFortAbilitySetHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> TargetAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayAbilitySpecHandle> GrantedAbilityHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> AppliedEffectHandles;
    
public:
    FORTNITEGAME_API FFortAbilitySetHandle();
};

