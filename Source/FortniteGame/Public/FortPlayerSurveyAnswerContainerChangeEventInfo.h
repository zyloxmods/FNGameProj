#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyAnswerContainerChangeReason.h"
#include "FortPlayerSurveyAnswerContainerChangeEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnswerContainerChangeEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyAnswerContainerChangeReason Reason;
    
    FORTNITEGAME_API FFortPlayerSurveyAnswerContainerChangeEventInfo();
};

