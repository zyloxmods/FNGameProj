#pragma once
#include "CoreMinimal.h"
#include "EFortMatchmakingPrivacyConfiguration.generated.h"

UENUM(BlueprintType)
enum class EFortMatchmakingPrivacyConfiguration : uint8 {
    UserPartyConfigured,
    ForcePrivate,
    ForcePublic,
};

