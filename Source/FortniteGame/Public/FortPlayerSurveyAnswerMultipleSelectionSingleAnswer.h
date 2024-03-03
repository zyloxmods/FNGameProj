#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerSurveyAnswerMultipleSelectionSingleAnswer.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan TimeTaken;
    
    FORTNITEGAME_API FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer();
};

