#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionStandardBase.h"
#include "FortPlayerSurveyQuestionFreeFormText.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortPlayerSurveyQuestionFreeFormText : public UFortPlayerSurveyQuestionStandardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnswerRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAnswerLength;
    
    UFortPlayerSurveyQuestionFreeFormText();
};

