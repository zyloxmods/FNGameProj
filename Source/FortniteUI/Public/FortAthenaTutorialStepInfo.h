#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaTutorialStep.h"
#include "FortAthenaTutorialScreenInfo.h"
#include "FortAthenaTutorialStepInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaTutorialStepInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAthenaTutorialStep TutorialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaTutorialScreenInfo> StepScreenInfo;
    
    FORTNITEUI_API FFortAthenaTutorialStepInfo();
};

