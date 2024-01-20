#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortDifficultyOptionEncounter.h"
#include "FortDifficultyOptionEncounter_Breathers.generated.h"

UCLASS(Blueprintable)
class UFortDifficultyOptionEncounter_Breathers : public UFortDifficultyOptionEncounter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBreathers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle LowPlayerPerformanceBreatherTimeSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle NormalPlayerPerformanceBreatherTimeSecondsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle HighPlayerPerformanceBreatherTimeSecondsCurve;
    
public:
    UFortDifficultyOptionEncounter_Breathers();
};

