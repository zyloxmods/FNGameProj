#include "PegasusDriver.h"

void UPegasusDriver::HandleVideoManagerJobShotWatched(const FVideoManagerExtractionJob& VideoManagerJob, const FWatchedReplayShotInfo& WatchedInfo) {
}

void UPegasusDriver::HandleVideoManagerJobShotExported(const FVideoManagerExtractionJob& VideoManagerJob, int32 ShotIndex, const FString& VideoPath) {
}

void UPegasusDriver::HandleVideoManagerJobFailed(const FVideoManagerExtractionJob& ExtractionJob, const FString& FailureReason, const FString& ErrorCode) {
}

void UPegasusDriver::HandleVideoManagerJobComplete(const FVideoManagerExtractionJob& ExtractionJob) {
}

void UPegasusDriver::HandleVideoManagerJobBeganProcessing(const FVideoManagerExtractionJob& ExtractionJob) {
}

void UPegasusDriver::HandleVideoManagerFinishedAllJobs() {
}

UPegasusDriver::UPegasusDriver() {
    PollIntervalSeconds = 1;
    BaseHoursUntilClose = 1;
    VideoManager = NULL;
    bShouldDevBuildsShowFPS = true;
    InactivityCheckSecondsInterval = 1;
    MaxSecondsBetweenVideoExports = 1;
}

