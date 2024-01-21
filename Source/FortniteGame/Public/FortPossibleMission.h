#pragma once
#include "CoreMinimal.h"
#include "FortPossibleMission.generated.h"

class UFortMissionInfo;

USTRUCT(BlueprintType)
struct FFortPossibleMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortMissionInfo> MissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAlwaysGenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrototype;
    
    FORTNITEGAME_API FFortPossibleMission();
};

