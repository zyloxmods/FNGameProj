#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.h"
#include "FortPlayerSurveyQuestion.h"
#include "FortPlayerSurveyQuestionStandardBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortPlayerSurveyQuestionStandardBase : public UFortPlayerSurveyQuestion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyQuestionPresentationStyle PresentationStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestionText;
    
    UFortPlayerSurveyQuestionStandardBase();
};

