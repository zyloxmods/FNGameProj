#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyPlaylistCategory.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerSurveyPlaylistCategory : uint8 {
    All,
    Solo,
    Duo,
    Squad,
    LTM,
    Creative,
    Playground,
};

