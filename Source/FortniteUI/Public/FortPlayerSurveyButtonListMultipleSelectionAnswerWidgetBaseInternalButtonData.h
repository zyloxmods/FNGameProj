#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData.generated.h"

class UCommonButton;

USTRUCT(BlueprintType)
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ButtonWidget;
    
    FORTNITEUI_API FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData();
};

