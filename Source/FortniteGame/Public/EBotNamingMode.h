#pragma once
#include "CoreMinimal.h"
#include "EBotNamingMode.generated.h"

UENUM(BlueprintType)
namespace EBotNamingMode {
    enum Type {
        RealName,
        SkinName,
        Anonymous,
        Custom,
    };
}

