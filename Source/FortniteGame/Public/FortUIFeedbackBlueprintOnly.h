#pragma once
#include "CoreMinimal.h"
#include "FortUIFeedback.h"
#include "FortUIFeedbackBlueprintOnly.generated.h"

USTRUCT(BlueprintType)
struct FFortUIFeedbackBlueprintOnly : public FFortUIFeedback {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortUIFeedbackBlueprintOnly();
};

