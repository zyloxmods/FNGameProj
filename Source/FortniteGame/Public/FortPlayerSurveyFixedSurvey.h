#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyBase.h"
#include "FortPlayerSurveyDescription.h"
#include "FortPlayerSurveyFixedSurvey.generated.h"

class UFortPlayerSurveyQuestion;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyFixedSurvey : public UFortPlayerSurveyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyDescription Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortPlayerSurveyQuestion*> Questions;
    
    UFortPlayerSurveyFixedSurvey();
};

