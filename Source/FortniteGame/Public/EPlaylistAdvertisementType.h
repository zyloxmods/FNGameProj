#pragma once
#include "CoreMinimal.h"
#include "EPlaylistAdvertisementType.generated.h"

UENUM(BlueprintType)
enum class EPlaylistAdvertisementType : uint8 {
    None,
    New,
    Updated,
};

