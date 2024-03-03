#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "PerDifficultyMissionGenerationInfo.h"
#include "FortMissionGenerationList.generated.h"

UCLASS(Blueprintable)
class UFortMissionGenerationList : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery GameplayContextRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPerDifficultyMissionGenerationInfo> PerDifficultyMissionGenerationInfos;
    
public:
    UFortMissionGenerationList();
};

