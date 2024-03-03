#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectTypes.h"
#include "FortAbilitySetHandle.h"
#include "AppliedHomebaseData.generated.h"

class UAbilitySystemComponent;

USTRUCT(BlueprintType)
struct FAppliedHomebaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> AppliedEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> AppliedAbilitySets;
    
    FORTNITEGAME_API FAppliedHomebaseData();
};

