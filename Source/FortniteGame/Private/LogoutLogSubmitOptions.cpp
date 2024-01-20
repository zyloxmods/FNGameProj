#include "LogoutLogSubmitOptions.h"

FLogoutLogSubmitOptions::FLogoutLogSubmitOptions() {
    this->bSubmitLogs = false;
    this->bSubmitLogsDuringLogin = false;
    this->LogTailKb = 0;
    this->LogSubmitChance = 0.00f;
}

