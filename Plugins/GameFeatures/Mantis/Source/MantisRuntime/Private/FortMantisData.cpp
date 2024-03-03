#include "FortMantisData.h"

UFortMantisData::UFortMantisData() {
    this->bDetachCharacterRotationFromCamera = true;
    this->ReattachCharacterRotationBlendTime = 1;
    this->ReattachCharacterRotationBlendExponent = 1;
    this->WindupCharacterRotationRate = 1;
    this->ExecutionCharacterRotationRate = 1;
    this->RecoveryCharacterRotationRate = 1;
    this->TechniqueAbility = NULL;
}

