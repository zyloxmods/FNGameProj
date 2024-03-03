#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Templates/SubclassOf.h"
#include "NitrogenPlayerGameplayAbilityOption.generated.h"

class UFortGameplayAbility;

USTRUCT(BlueprintType)
struct FNitrogenPlayerGameplayAbilityOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGameplayAbility> GameplayAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    NITROGENRUNTIME_API FNitrogenPlayerGameplayAbilityOption();
};

