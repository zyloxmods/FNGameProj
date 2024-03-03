#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VideoManagerExtractionJob.h"
#include "WatchedReplayShotInfo.h"
#include "PegasusDriver.generated.h"

class UReplayVideoManager;

UCLASS(Blueprintable, Config=Game)
class UPegasusDriver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PollIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseHoursUntilClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReplayVideoManager* VideoManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldDevBuildsShowFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InactivityCheckSecondsInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSecondsBetweenVideoExports;
    
public:
    UPegasusDriver();
private:
    UFUNCTION(BlueprintCallable)
    void HandleVideoManagerJobShotWatched(const FVideoManagerExtractionJob& VideoManagerJob, const FWatchedReplayShotInfo& WatchedInfo);
    
    UFUNCTION(BlueprintCallable)
    void HandleVideoManagerJobShotExported(const FVideoManagerExtractionJob& VideoManagerJob, int32 ShotIndex, const FString& VideoPath);
    
    UFUNCTION(BlueprintCallable)
    void HandleVideoManagerJobFailed(const FVideoManagerExtractionJob& ExtractionJob, const FString& FailureReason, const FString& ErrorCode);
    
    UFUNCTION(BlueprintCallable)
    void HandleVideoManagerJobComplete(const FVideoManagerExtractionJob& ExtractionJob);
    
    UFUNCTION(BlueprintCallable)
    void HandleVideoManagerJobBeganProcessing(const FVideoManagerExtractionJob& ExtractionJob);
    
    UFUNCTION(BlueprintCallable)
    void HandleVideoManagerFinishedAllJobs();
    
};

