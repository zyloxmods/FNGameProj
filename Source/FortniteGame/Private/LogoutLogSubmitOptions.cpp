#include "LogoutLogSubmitOptions.h"

FLogoutLogSubmitOptions::FLogoutLogSubmitOptions() {
    this->bSubmitLogs = false;
    this->bSubmitSecondaryLogs = false;
    this->bSubmitLogsDuringLogin = false;
    this->LogTailKb = 0;
    this->LogSubmitChance = 1;
}

