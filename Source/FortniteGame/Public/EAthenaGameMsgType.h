#pragma once
#include "CoreMinimal.h"
#include "EAthenaGameMsgType.generated.h"

UENUM(BlueprintType)
enum class EAthenaGameMsgType : uint8 {
    None,
    DefaultIntro,
    DefaultMessage,
    DefaultCriticalMessage,
    CommIntro,
    CommMessage,
    CommCriticalMessage,
    CornerIntro,
    CornerMessage,
    CornerCriticalMessage,
    RespawnTurningOffWarning,
    RespawnOffWarning,
    CenterMessage,
    CenterImportantMessage,
    CenterCriticalMessage,
};

