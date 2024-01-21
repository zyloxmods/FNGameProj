#pragma once
#include "CoreMinimal.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_Reload.generated.h"

UCLASS(Blueprintable)
class UFortGameplayAbility_Reload : public UFortGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTimesReloaded;
    
    UFortGameplayAbility_Reload();
};

