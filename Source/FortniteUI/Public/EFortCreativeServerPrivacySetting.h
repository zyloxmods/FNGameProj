#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeServerPrivacySetting.generated.h"

UENUM(BlueprintType)
enum class EFortCreativeServerPrivacySetting : uint8 {
    Unknown,
    Private,
    Public,
};

