#pragma once
#include "CoreMinimal.h"
#include "ECobaltStatusTeam.generated.h"

UENUM(BlueprintType)
namespace ECobaltStatusTeam {
    enum Type {
        Ally,
        Enemy,
        MAX = 0xFF,
    };
}

