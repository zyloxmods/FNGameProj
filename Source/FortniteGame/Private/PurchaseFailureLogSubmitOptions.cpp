#include "PurchaseFailureLogSubmitOptions.h"

FPurchaseFailureLogSubmitOptions::FPurchaseFailureLogSubmitOptions() {
    this->bSubmitLogs = false;
    this->LogTailKb = 0;
    this->LogSubmitChance = 0.00f;
}

