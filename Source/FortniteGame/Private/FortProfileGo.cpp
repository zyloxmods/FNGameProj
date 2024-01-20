#include "FortProfileGo.h"

UFortProfileGo::UFortProfileGo() {
    this->ProfileGoScenarios.AddDefaulted(64);
    this->ProfileGoCollections.AddDefaulted(13);
    this->AllCommands.AddDefaulted(77);
    this->DefaultSettleTime = 5.00f;
}

