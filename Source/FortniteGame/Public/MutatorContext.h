#pragma once
#include "CoreMinimal.h"
#include "MutatorContext.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMutatorContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> MutatorOwners;
    
    FORTNITEGAME_API FMutatorContext();
};

