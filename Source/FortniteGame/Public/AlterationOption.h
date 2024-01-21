#pragma once
#include "CoreMinimal.h"
#include "FortItemQuantityPair.h"
#include "AlterationOption.generated.h"

class UFortAlterationItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAlterationOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAlterationItemDefinition> AlterationDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> Costs;
    
    FAlterationOption();
};

