#pragma once
#include "CoreMinimal.h"
#include "EFortActorSpawnerAuthority.generated.h"

UENUM(BlueprintType)
enum class EFortActorSpawnerAuthority : uint8 {
    ServerAuthoritative,
    ClientAuthoritative,
};

