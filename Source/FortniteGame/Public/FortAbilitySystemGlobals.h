#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "FortAbilitySystemGlobals.generated.h"

UCLASS(Blueprintable)
class UFortAbilitySystemGlobals : public UAbilitySystemGlobals {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BROnlyAttributeSetDefaultsToExclude;
    
public:
    UFortAbilitySystemGlobals();
};

