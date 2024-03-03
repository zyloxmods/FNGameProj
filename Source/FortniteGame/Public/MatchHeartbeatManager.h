#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchHeartbeatManagerTickFunction.h"
#include "MatchHeartbeatManager.generated.h"

class AFortGameMode;
class USlowStatReader;

UCLASS(Blueprintable, Config=Game)
class UMatchHeartbeatManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameMode* OwningGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USlowStatReader* SlowStatReader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchHeartbeatManagerTickFunction MatchHearbeatTick;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerMetricsLOD;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighFrequencyServerMetricsDurationSec;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HighFrequencyEventsLOD;
    
public:
    UMatchHeartbeatManager();
};

