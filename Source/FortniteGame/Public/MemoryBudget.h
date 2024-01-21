#pragma once
#include "CoreMinimal.h"
#include "MemoryBudget.generated.h"

USTRUCT(BlueprintType)
struct FMemoryBudget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InUseMemory;
    
    FORTNITEGAME_API FMemoryBudget();
};

