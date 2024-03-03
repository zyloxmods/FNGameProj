#include "PelvisMod_BankAngleInput_Spring.h"

FPelvisMod_BankAngleInput_Spring::FPelvisMod_BankAngleInput_Spring() {
    this->BankLeanStrafeA = 1;
    this->BankLeanStrafeB = 1;
    this->BankTurnA = 1;
    this->BankTurnB = 1;
    this->BankStiffness = 1;
    this->BankDampening = 1;
    this->BankMass = 1;
    this->BankClampMin = 1;
    this->BankClampMax = 1;
}

