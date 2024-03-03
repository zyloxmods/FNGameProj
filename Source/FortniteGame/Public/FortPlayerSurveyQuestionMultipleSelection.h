#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyQuestionChoice.h"
#include "FortPlayerSurveyQuestionStandardBase.h"
#include "FortPlayerSurveyQuestionMultipleSelection.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortPlayerSurveyQuestionMultipleSelection : public UFortPlayerSurveyQuestionStandardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyQuestionChoice> Choices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumAnswers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumAnswers;
    
    UFortPlayerSurveyQuestionMultipleSelection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetMaxNumAnswers(int32& OutMaxNumAnswers) const;
    
};

