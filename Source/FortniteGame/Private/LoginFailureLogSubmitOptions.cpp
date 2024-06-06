#include "LoginFailureLogSubmitOptions.h"

FLoginFailureLogSubmitOptions::FLoginFailureLogSubmitOptions() {
    bSubmitLogs = false;
    bSubmitSecondaryLogs = false;
    LogTailKb = 0;
    LogSubmitChance = 1;
}

