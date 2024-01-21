#pragma once
#include "CoreMinimal.h"
#include "EExternalAccountType.generated.h"

UENUM(BlueprintType)
enum class EExternalAccountType : uint8 {
    None,
    Facebook,
    Google,
    Epic_PSN,
    Epic_XBL,
    Epic_Erebus,
    Epic_Facebook,
    Epic_Google,
    Epic_Portal,
    Epic_Portal_Kairos,
};

