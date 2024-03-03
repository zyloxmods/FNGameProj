#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAthenaTutorialStandaloneStepInfo.h"
#include "FortAthenaTutorialStepInfo.h"
#include "FortAthenaTutorialScreenData.generated.h"

UCLASS(Blueprintable)
class UFortAthenaTutorialScreenData : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaTutorialStepInfo> TutorialSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaTutorialStandaloneStepInfo> StandaloneTutorialSteps;
    
public:
    UFortAthenaTutorialScreenData();
};

