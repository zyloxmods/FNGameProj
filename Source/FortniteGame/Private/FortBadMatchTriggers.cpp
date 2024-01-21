#include "FortBadMatchTriggers.h"

UFortBadMatchTriggers::UFortBadMatchTriggers() {
    this->Triggers.AddDefaulted(5);
    this->PhasesToInclude.AddDefaulted(2);
    this->ReportProbability = 0.00f;
    this->bEnabled = true;
    this->bEnableCsvProfile = true;
    this->bUploadAllCsvs = false;
    this->bAllowForcedPerformanceReport = false;
}

