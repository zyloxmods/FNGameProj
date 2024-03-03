#include "FortMatchPerfReport.h"

UFortMatchPerfReport::UFortMatchPerfReport() {
    this->BadMatchTriggers.AddDefaulted(5);
    this->PhasesToInclude.AddDefaulted(3);
    this->ReportProbability = 4294967295;
    this->bEnabled = true;
    this->bEnableCsvProfile = true;
    this->bUploadAllCsvs = true;
    this->bAllowForcedPerformanceReport = false;
}

