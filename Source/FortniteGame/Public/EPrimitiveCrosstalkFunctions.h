#pragma once
#include "CoreMinimal.h"
#include "EPrimitiveCrosstalkFunctions.generated.h"

UENUM(BlueprintType)
enum class EPrimitiveCrosstalkFunctions : uint8 {
    SendTagAsPayload,
    SendTaggedObjectPayload,
    SendTaggedStringPayload,
    SendTaggedIntPayload,
    GetTaggedObjectPayload,
    GetTaggedStringPayload,
    GetTaggedIntPayload,
    BindNoParamEventToTaggedDelegate,
    UnbindNoParamEventFromTaggedDelegate,
    UnbindObjectCallbacksFromAllTaggedDelegates,
};

