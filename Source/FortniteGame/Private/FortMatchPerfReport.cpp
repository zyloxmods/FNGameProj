#include "FortMatchPerfReport.h"

UFortMatchPerfReport::UFortMatchPerfReport() {
    BadMatchTriggers.AddDefaulted(5);
    PhasesToInclude.AddDefaulted(3);
    ReportProbability = 4294967295;
    bEnabled = true;
    bEnableCsvProfile = true;
    bUploadAllCsvs = true;
    bAllowForcedPerformanceReport = false;
}

