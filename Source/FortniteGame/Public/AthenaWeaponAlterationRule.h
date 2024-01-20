#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AthenaWeaponAlterationRule.generated.h"

class UCosmeticOnlyAlterationItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaWeaponAlterationRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MatchCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCosmeticOnlyAlterationItemDefinition*> Alterations;
    
    FORTNITEGAME_API FAthenaWeaponAlterationRule();
};

