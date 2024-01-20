#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EFortPlayerSurveyCMSDataGameMode.h"
#include "EFortPlayerSurveyCMSDataTrigger.h"
#include "FortPlayerSurveyCMSDataSurveyDescriptionMessage.h"
#include "FortPlayerSurveyCMSDataSurvey.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataSurvey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool rt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> C;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayerSurveyCMSDataSurveyDescriptionMessage cm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataTrigger R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortPlayerSurveyCMSDataGameMode> sg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJsonObjectWrapper> Q;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataSurvey();
};

