#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaTutorial_StandaloneStep.h"
#include "FortAthenaTutorialScreenInfo.h"
#include "FortAthenaTutorialStandaloneStepInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaTutorialStandaloneStepInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAthenaTutorial_StandaloneStep StandaloneStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaTutorialScreenInfo StepScreenInfo;
    
    FORTNITEUI_API FFortAthenaTutorialStandaloneStepInfo();
};

