#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EFortPlayerSurveyAnalyticsFinishReason.h"
#include "FortPlayerSurveyAnalyticsAnswer.h"
#include "FortPlayerSurveyAnalyticsSurveyResponse.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlayerSurveyAnalyticsSurveyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SurveyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyAnalyticsFinishReason FinishReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyAnalyticsAnswer> Answers;
    
    FFortPlayerSurveyAnalyticsSurveyResponse();
};

