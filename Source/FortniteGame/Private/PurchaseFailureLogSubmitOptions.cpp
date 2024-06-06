#include "PurchaseFailureLogSubmitOptions.h"

FPurchaseFailureLogSubmitOptions::FPurchaseFailureLogSubmitOptions() {
    bSubmitLogs = false;
    bSubmitSecondaryLogs = false;
    LogTailKb = 0;
    LogSubmitChance = 1;
}

