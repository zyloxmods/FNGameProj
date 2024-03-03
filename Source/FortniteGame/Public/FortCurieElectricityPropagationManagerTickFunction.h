#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "FortCurieElectricityPropagationManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieElectricityPropagationManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieElectricityPropagationManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FFortCurieElectricityPropagationManagerTickFunction> : public TStructOpsTypeTraitsBase2<FFortCurieElectricityPropagationManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

