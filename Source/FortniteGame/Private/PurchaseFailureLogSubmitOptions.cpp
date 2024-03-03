#include "PurchaseFailureLogSubmitOptions.h"

FPurchaseFailureLogSubmitOptions::FPurchaseFailureLogSubmitOptions() {
    this->bSubmitLogs = false;
    this->bSubmitSecondaryLogs = false;
    this->LogTailKb = 0;
    this->LogSubmitChance = 1;
}

