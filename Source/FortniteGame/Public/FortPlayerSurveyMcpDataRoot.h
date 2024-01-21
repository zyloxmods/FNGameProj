#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyMcpDataSurveyMetadata.h"
#include "FortPlayerSurveyMcpDataRoot.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyMcpDataRoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyMcpDataSurveyMetadata AllSurveysMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FFortPlayerSurveyMcpDataSurveyMetadata> MetaData;
    
    FORTNITEGAME_API FFortPlayerSurveyMcpDataRoot();
};

