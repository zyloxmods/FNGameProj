#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.h"
#include "EFortPlayerSurveyQuestionType.h"
#include "FortPlayerSurveyAnswerWidgetDataTableEntry.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyAnswerWidgetDataTable.generated.h"

class UFortPlayerSurveyAnswerWidgetBase;

UCLASS(Blueprintable)
class UFortPlayerSurveyAnswerWidgetDataTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FForEachDelegate, EFortPlayerSurveyQuestionType, QuestionType, EFortPlayerSurveyQuestionPresentationStyle, PresentationStyle, TSubclassOf<UFortPlayerSurveyAnswerWidgetBase>, WidgetClass);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortPlayerSurveyQuestionType, FFortPlayerSurveyAnswerWidgetDataTableEntry> Entries;
    
public:
    UFortPlayerSurveyAnswerWidgetDataTable();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UFortPlayerSurveyAnswerWidgetBase> GetClassForSurvey(EFortPlayerSurveyQuestionType QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForEach(const UFortPlayerSurveyAnswerWidgetDataTable::FForEachDelegate& Delegate) const;
    
};

