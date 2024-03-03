#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyBase.h"
#include "FortPlayerSurveyDescription.h"
#include "FortPlayerSurveyFixedSurvey.generated.h"

class UFortPlayerSurveyQuestionLegacy;

UCLASS(Blueprintable)
class UFortPlayerSurveyFixedSurvey : public UFortPlayerSurveyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyDescription Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPlayerSurveyQuestionLegacy*> Questions;
    
    UFortPlayerSurveyFixedSurvey();
};

