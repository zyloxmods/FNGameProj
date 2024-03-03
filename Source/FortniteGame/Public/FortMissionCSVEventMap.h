#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortMissionCSVEventMap.generated.h"

UCLASS(Blueprintable)
class UFortMissionCSVEventMap : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MissionMappings;
    
public:
    UFortMissionCSVEventMap();
};

