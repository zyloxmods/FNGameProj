#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortNonPrimaryMission.h"
#include "FortNonPrimaryMissionList.generated.h"

UCLASS(Blueprintable)
class UFortNonPrimaryMissionList : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortNonPrimaryMission> NonPrimaryMissionList;
    
    UFortNonPrimaryMissionList();
};

