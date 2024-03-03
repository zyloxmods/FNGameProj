#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerFeedbackFlags.generated.h"

UENUM(BlueprintType)
enum class EFortPlayerFeedbackFlags : uint8 {
    SubscreenFlow_ForceDisplayFreeText,
    SubscreenFlow_IncludeScreenshotSubscreen,
    DoNotDisplay_SaveTheWorld,
    DoNotDisplay_Athena,
    DoNotDisplay_Creative,
    Submit_TryDisplayBlockUser,
    Submit_TryDisplayCommunityRulesURL,
};

