#include "FortAthenaBTService_CheckAlertLevel.h"

UFortAthenaBTService_CheckAlertLevel::UFortAthenaBTService_CheckAlertLevel() {
    this->CurrentAlertLevel = EAlertLevel::Unaware;
    this->ToAlertLevel = EAlertLevel::Unaware;
    this->bClearTarget = false;
}

