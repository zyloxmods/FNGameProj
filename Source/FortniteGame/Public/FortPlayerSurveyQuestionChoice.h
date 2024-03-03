#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionChoice.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyQuestionChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChoiceText;
    
    FORTNITEGAME_API FFortPlayerSurveyQuestionChoice();
};

