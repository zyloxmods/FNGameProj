#pragma once
#include "CoreMinimal.h"
#include "EFortPlayerSurveyCMSDataGameMode.h"
#include "EFortPlayerSurveyCMSDataQuestState.h"
#include "FortPlayerSurveyCMSDataConditionBase.h"
#include "FortPlayerSurveyCMSDataConditionQuestState.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerSurveyCMSDataConditionQuestState : public FFortPlayerSurveyCMSDataConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayerSurveyCMSDataGameMode sg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Q;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EFortPlayerSurveyCMSDataQuestState> st;
    
    FORTNITEUI_API FFortPlayerSurveyCMSDataConditionQuestState();
};

