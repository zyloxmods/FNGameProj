#pragma once
#include "CoreMinimal.h"
#include "FortStartingMissionInfo.generated.h"

class UFortMissionInfo;

USTRUCT(BlueprintType)
struct FFortStartingMissionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortMissionInfo*> StartingMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSharedMissionLoading;
    
    FORTNITEGAME_API FFortStartingMissionInfo();
};

