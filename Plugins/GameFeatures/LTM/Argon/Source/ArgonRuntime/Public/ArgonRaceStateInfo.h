#pragma once
#include "CoreMinimal.h"
#include "ArgonFinishedPlayerInfo.h"
#include "EArgonRacePhase.h"
#include "ArgonRaceStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FArgonRaceStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArgonRacePhase CurrentRacePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArgonFinishedPlayerInfo> FinishedTeamLeaderInfos;
    
    ARGONRUNTIME_API FArgonRaceStateInfo();
};

