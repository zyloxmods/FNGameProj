#pragma once
#include "CoreMinimal.h"
#include "EFortLoginAccountType.generated.h"

UENUM(BlueprintType)
enum class EFortLoginAccountType : uint8 {
    None,
    EpicAccount,
    Facebook,
    Google,
    PSN,
    XBLive,
    Erebus,
};

