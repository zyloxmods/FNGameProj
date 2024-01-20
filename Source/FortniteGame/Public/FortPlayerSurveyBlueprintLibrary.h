#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortPlayerSurveyQuestionType.h"
#include "FortPlayerSurveyAnswer.h"
#include "FortPlayerSurveyAnswerBase.h"
#include "FortPlayerSurveyAnswerFreeFormText.h"
#include "FortPlayerSurveyAnswerMultipleChoice.h"
#include "FortPlayerSurveyBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortPlayerSurveyBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortPlayerSurveyAnswer MakeMultipleChoiceAnswer(const FFortPlayerSurveyAnswerMultipleChoice& Answer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortPlayerSurveyAnswer MakeFreeFormTextAnswer(const FFortPlayerSurveyAnswerFreeFormText& Answer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortPlayerSurveyAnswerMultipleChoice GetMultipleChoiceAnswer(const FFortPlayerSurveyAnswer& Answer, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortPlayerSurveyAnswerFreeFormText GetFreeFormTextAnswer(const FFortPlayerSurveyAnswer& Answer, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFortPlayerSurveyQuestionType GetAnswerType(const FFortPlayerSurveyAnswer& Answer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFortPlayerSurveyAnswerBase GetAnswerBase(const FFortPlayerSurveyAnswer& Answer);
    
};

