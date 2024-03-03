#pragma once
#include "CoreMinimal.h"
#include "EFortMtxPlatform.generated.h"

UENUM(BlueprintType)
enum class EFortMtxPlatform : uint8 {
    Epic,
    PSN,
    Live,
    Shared,
    EpicPC,
    EpicPCKorea,
    IOSAppStore,
    EpicAndroid,
    Nintendo,
    WeGame,
    Samsung,
    GooglePlay,
};

