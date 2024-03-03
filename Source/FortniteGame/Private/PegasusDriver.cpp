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
    this->PollIntervalSeconds = 1;
    this->BaseHoursUntilClose = 1;
    this->VideoManager = NULL;
    this->bShouldDevBuildsShowFPS = true;
    this->InactivityCheckSecondsInterval = 1;
    this->MaxSecondsBetweenVideoExports = 1;
}

