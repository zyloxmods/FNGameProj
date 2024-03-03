#pragma once
#include "CoreMinimal.h"
#include "LogicalConnectionChain.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FLogicalConnectionChain {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LogicalConnectedActors;
    
    FORTNITEGAME_API FLogicalConnectionChain();
};

