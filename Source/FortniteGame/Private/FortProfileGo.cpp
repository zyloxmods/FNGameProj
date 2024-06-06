#include "FortProfileGo.h"

UFortProfileGo::UFortProfileGo() {
    ProfileGoScenarios.AddDefaulted(164);
    ProfileGoGeneratedScenarios.AddDefaulted(2);
    ProfileGoCollections.AddDefaulted(23);
    AllCommands.AddDefaulted(95);
    AnimProfilingAssetsBlacklist.AddDefaulted(26);
    DefaultSettleTime = 1;
}

