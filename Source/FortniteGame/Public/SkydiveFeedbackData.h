#pragma once
#include "CoreMinimal.h"
#include "FortChangeMonitoringStruct.h"
#include "SkydiveFeedbackData.generated.h"

USTRUCT(BlueprintType)
struct FSkydiveFeedbackData : public FFortChangeMonitoringStruct {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FSkydiveFeedbackData();
};

