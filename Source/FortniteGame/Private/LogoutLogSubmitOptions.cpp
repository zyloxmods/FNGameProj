#include "LogoutLogSubmitOptions.h"

FLogoutLogSubmitOptions::FLogoutLogSubmitOptions() {
    bSubmitLogs = false;
    bSubmitSecondaryLogs = false;
    bSubmitLogsDuringLogin = false;
    LogTailKb = 0;
    LogSubmitChance = 1;
}

