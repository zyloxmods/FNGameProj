#include "LogSubmitOptions.h"

FLogSubmitOptions::FLogSubmitOptions() {
    this->bSubmitLogs = false;
    this->bSubmitLogsInOptionState = false;
    this->LogTailKb = 0;
    this->LogSubmitChance = 1;
}

