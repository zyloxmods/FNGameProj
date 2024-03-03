#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPlayerSurveyMcpDataSurveyMetadata.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyMcpDataSurveyMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTimesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastTimeCompleted;
    
    FORTNITEGAME_API FFortPlayerSurveyMcpDataSurveyMetadata();
};

