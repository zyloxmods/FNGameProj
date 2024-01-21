#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.h"
#include "EFortPlayerSurveyQuestionType.h"
#include "FortPlayerSurveyQuestion.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerSurveyQuestion : public UObject {
    GENERATED_BODY()
public:
    UFortPlayerSurveyQuestion();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPlayerSurveyQuestionType GetQuestionType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortPlayerSurveyQuestionPresentationStyle GetPresentationStyle() const;
    
};

