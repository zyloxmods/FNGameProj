#include "FortHardyComponent_Telemetry.h"

void UFortHardyComponent_Telemetry::SetExtractionReason(const EHardyExtractionReason Reason) {
}

UFortHardyComponent_Telemetry::UFortHardyComponent_Telemetry() {
    this->ExtractionReason = EHardyExtractionReason::Death;
}

