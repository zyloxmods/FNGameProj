#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "EntityTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FEntityTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    ENTITYCORE_API FEntityTickFunction();
};

template<>
struct TStructOpsTypeTraits<FEntityTickFunction> : public TStructOpsTypeTraitsBase2<FEntityTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

