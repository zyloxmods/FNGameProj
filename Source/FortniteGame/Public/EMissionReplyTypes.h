#pragma once
#include "CoreMinimal.h"
#include "EMissionReplyTypes.generated.h"

UENUM(BlueprintType)
namespace EMissionReplyTypes {
    enum Type {
        Handled,
        NotHandled,
    };
}

