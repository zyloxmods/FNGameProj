#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyQuestionPresentationStyle.h"
#include "Templates/SubclassOf.h"
#include "FortPlayerSurveyAnswerWidgetDataTableEntry.generated.h"

class UFortPlayerSurveyAnswerWidgetBase;

USTRUCT(BlueprintType)
struct FFortPlayerSurveyAnswerWidgetDataTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortPlayerSurveyQuestionPresentationStyle, TSubclassOf<UFortPlayerSurveyAnswerWidgetBase>> WidgetClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerSurveyAnswerWidgetBase> FallbackWidgetClass;
    
    FORTNITEUI_API FFortPlayerSurveyAnswerWidgetDataTableEntry();
};

