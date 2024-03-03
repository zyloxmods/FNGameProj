#pragma once
#include "CoreMinimal.h"
#include "FortItemEntryAbilityData.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FFortItemEntryAbilityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UGameplayAbility>, float> AbilityCooldownMap;
    
    FORTNITEGAME_API FFortItemEntryAbilityData();
};

