#pragma once
#include "CoreMinimal.h"
#include "EFortLobbyType.generated.h"

UENUM(BlueprintType)
enum class EFortLobbyType : uint8 {
    Default,
    Tournament,
    Creative,
    Division,
};

