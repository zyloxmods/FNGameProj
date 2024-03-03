#pragma once
#include "CoreMinimal.h"
#include "DeathEvent.h"
#include "GameLogBuildSample.h"
#include "GameLogDancePartySample.h"
#include "GameLogPawnSample.h"
#include "GameLogPlayerMetaSample.h"
#include "StormSample.h"
#include "GameLogStream.generated.h"

USTRUCT(BlueprintType)
struct FGameLogStream {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeathEvent> DeathEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLogPawnSample> PawnSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLogBuildSample> BuildEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStormSample> StormSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLogPlayerMetaSample> PlayerMetaInfoSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLogDancePartySample> PlayerDancePartySamples;
    
    FORTNITEGAME_API FGameLogStream();
};

