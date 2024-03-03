#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FortCurieCableSignalManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieCableSignalManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieCableSignalManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFortCurieCableSignalManagerTickFunction> : public TStructOpsTypeTraitsBase2<FFortCurieCableSignalManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

