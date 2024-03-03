#pragma once
#include "CoreMinimal.h"
#include "ItemAndCount.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FItemAndCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* Item;
    
    FORTNITEGAME_API FItemAndCount();
};

