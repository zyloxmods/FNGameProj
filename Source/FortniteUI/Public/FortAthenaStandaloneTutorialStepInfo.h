#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorialScreenInfo.h"
#include "FortAthenaStandaloneTutorialStepInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaStandaloneTutorialStepInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaTutorialScreenInfo> StepScreenInfo;
    
    FORTNITEUI_API FFortAthenaStandaloneTutorialStepInfo();
};

