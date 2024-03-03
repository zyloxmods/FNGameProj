#pragma once
#include "CoreMinimal.h"
#include "EFortDamageZone.generated.h"

UENUM(BlueprintType)
enum class EFortDamageZone :uint8{

        Light,
        Normal,
        Critical,
        Vulnerability,
        Max,
    };

