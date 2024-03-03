#pragma once
#include "CoreMinimal.h"
#include "EClientContentReadiness.generated.h"

UENUM(BlueprintType)
enum class EClientContentReadiness : uint8 {
    AwaitingServerResponse,
    ReceivingContentNames,
    DownloadingContent,
    MountingContent,
    ReadyToJoin,
    FailedToMount,
    NotConnected,
    ConnectionFailed,
    CelluarDataRefusal,
    CancelledDownloadContent,
    None,
};

