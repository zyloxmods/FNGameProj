#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FortCurieSpatialManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieSpatialManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieSpatialManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFortCurieSpatialManagerTickFunction> : public TStructOpsTypeTraitsBase2<FFortCurieSpatialManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

