#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataRelativeSurveyKeyType.h"
#include "FortPlayerSurveyCMSDataRelativeSurveyKey.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataRelativeSurveyKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataRelativeSurveyKeyType T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataRelativeSurveyKey();
};

