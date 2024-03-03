#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortPlayerPerformanceEstimateSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerPerformanceEstimateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle PlayerPerformanceEstimateTransformMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle PlayerPerformanceEstimateTransformOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle PlayerPerformanceEstimateTransformMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EncounterPlayerPerformanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviousWavePlayerPerformanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CampaignPlayerPerformanceWeight;
    
    FORTNITEGAME_API FFortPlayerPerformanceEstimateSettings();
};

