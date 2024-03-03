#pragma once
#include "CoreMinimal.h"
#include "EFortAIDirectorEventParticipant.generated.h"

UENUM(BlueprintType)
enum class EFortAIDirectorEventParticipant : uint8 {
    Target,
    Source,
    Either,
    Max_None,
};

