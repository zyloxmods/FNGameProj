#pragma once
#include "CoreMinimal.h"
#include "ItemDefinitionAndCount.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FItemDefinitionAndCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> ItemDefinition;
    
    FORTNITEGAME_API FItemDefinitionAndCount();
};

