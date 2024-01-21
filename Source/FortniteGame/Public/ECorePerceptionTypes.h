#pragma once
#include "CoreMinimal.h"
#include "ECorePerceptionTypes.generated.h"

UENUM(BlueprintType)
namespace ECorePerceptionTypes {
    enum Type {
        Sight,
        Hearing,
        Damage,
        Touch,
        Team,
        Prediction,
        MAX,
    };
}

