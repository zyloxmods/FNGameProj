#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "CombatThresholdData.generated.h"

USTRUCT(BlueprintType)
struct FCombatThresholdData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ExitHeatLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ThresholdName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DebugGraphColor;
    
    FORTNITEGAME_API FCombatThresholdData();
};

