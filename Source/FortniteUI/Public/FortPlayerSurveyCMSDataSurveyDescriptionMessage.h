#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataSurveyDescriptionMessage.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText M;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataSurveyDescriptionMessage();
};

