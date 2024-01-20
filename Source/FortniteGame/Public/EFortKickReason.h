#pragma once
#include "CoreMinimal.h"
#include "EFortKickReason.generated.h"

UENUM(BlueprintType)
enum class EFortKickReason : uint8 {
    NotKicked,
    GenericKick,
    WasBanned,
    EncryptionRequired,
    CrossPlayRestriction,
    ClientIdRestriction,
};

