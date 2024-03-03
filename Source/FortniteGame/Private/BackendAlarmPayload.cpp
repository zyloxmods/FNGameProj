#include "BackendAlarmPayload.h"

FBackendAlarmPayload::FBackendAlarmPayload() {
    this->PGS_SQSRecievedCount = 0;
    this->PGS_bIsVideoManagerFinished = false;
    this->PGS_bIsShuttingDown = false;
    this->PGS_WastedSeconds = 0;
}

