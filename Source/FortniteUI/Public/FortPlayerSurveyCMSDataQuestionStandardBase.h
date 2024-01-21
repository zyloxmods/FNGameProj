#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataPresentationStyle.h"
#include "FortPlayerSurveyCMSDataQuestionBase.h"
#include "FortPlayerSurveyCMSDataQuestionStandardBase.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataQuestionStandardBase : public FFortPlayerSurveyCMSDataQuestionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataPresentationStyle S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText T;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataQuestionStandardBase();
};

