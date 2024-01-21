#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerSurveyAnswerBase.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnswerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan TimeSpentAnswering;
    
    FORTNITEGAME_API FFortPlayerSurveyAnswerBase();
};

