#include "FortProfileGo.h"

UFortProfileGo::UFortProfileGo() {
    this->ProfileGoScenarios.AddDefaulted(164);
    this->ProfileGoGeneratedScenarios.AddDefaulted(2);
    this->ProfileGoCollections.AddDefaulted(23);
    this->AllCommands.AddDefaulted(95);
    this->AnimProfilingAssetsBlacklist.AddDefaulted(26);
    this->DefaultSettleTime = 1;
}

