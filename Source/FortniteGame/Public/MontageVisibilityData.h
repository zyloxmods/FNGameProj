#pragma once
#include "CoreMinimal.h"
#include "EMontageVisibilityRule.h"
#include "MontageVisibilityData.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FMontageVisibilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageVisibilityRule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* Item;
    
    FORTNITEGAME_API FMontageVisibilityData();
};

