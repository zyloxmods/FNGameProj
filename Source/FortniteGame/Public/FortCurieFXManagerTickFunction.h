#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FortCurieFXManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieFXManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieFXManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFortCurieFXManagerTickFunction> : public TStructOpsTypeTraitsBase2<FFortCurieFXManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

