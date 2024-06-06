#include "BackendAlarmPayload.h"

FBackendAlarmPayload::FBackendAlarmPayload() {
    PGS_SQSRecievedCount = 0;
    PGS_bIsVideoManagerFinished = false;
    PGS_bIsShuttingDown = false;
    PGS_WastedSeconds = 0;
}

