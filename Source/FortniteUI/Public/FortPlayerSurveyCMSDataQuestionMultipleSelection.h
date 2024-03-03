#pragma once
#include "CoreMinimal.h"
#include "FortPlayerSurveyCMSDataQuestionChoice.h"
#include "FortPlayerSurveyCMSDataQuestionStandardBase.h"
#include "FortPlayerSurveyCMSDataQuestionMultipleSelection.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataQuestionMultipleSelection : public FFortPlayerSurveyCMSDataQuestionStandardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerSurveyCMSDataQuestionChoice> C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mx;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataQuestionMultipleSelection();
};

