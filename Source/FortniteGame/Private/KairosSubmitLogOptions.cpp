#include "KairosSubmitLogOptions.h"

FKairosSubmitLogOptions::FKairosSubmitLogOptions() {
    bSubmitLogs = false;
    bSubmitSecondaryLogs = false;
    LogTailKb = 0;
    LogSubmitChance = 1;
}

