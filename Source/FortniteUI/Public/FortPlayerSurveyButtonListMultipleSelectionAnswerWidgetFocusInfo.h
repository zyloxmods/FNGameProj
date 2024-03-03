#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType.h"
#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType FocusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    FORTNITEUI_API FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo();
};

