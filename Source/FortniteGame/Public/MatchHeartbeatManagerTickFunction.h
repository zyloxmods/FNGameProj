#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "MatchHeartbeatManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FMatchHeartbeatManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FMatchHeartbeatManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FMatchHeartbeatManagerTickFunction> : public TStructOpsTypeTraitsBase2<FMatchHeartbeatManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

