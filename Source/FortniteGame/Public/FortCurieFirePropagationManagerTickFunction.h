#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FortCurieFirePropagationManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieFirePropagationManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieFirePropagationManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFortCurieFirePropagationManagerTickFunction> : public TStructOpsTypeTraitsBase2<FFortCurieFirePropagationManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

