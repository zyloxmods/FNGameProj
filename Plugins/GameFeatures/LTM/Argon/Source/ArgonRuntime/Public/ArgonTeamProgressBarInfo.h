#pragma once
#include "CoreMinimal.h"
#include "ArgonTeamProgressBarInfo.generated.h"

USTRUCT(BlueprintType)
struct FArgonTeamProgressBarInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 NumTicketsAcquired;
    
    ARGONRUNTIME_API FArgonTeamProgressBarInfo();
};

