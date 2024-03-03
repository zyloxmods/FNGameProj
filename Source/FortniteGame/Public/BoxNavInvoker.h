#pragma once
#include "CoreMinimal.h"
#include "BoxNavInvoker.generated.h"

class AAthenaNavInvokerBox;

USTRUCT(BlueprintType)
struct FBoxNavInvoker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaNavInvokerBox* Invoker;
    
    FORTNITEGAME_API FBoxNavInvoker();
};

