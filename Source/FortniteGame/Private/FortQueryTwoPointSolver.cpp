#include "FortQueryTwoPointSolver.h"

void UFortQueryTwoPointSolver::Start(UObject* Querier) {
}

void UFortQueryTwoPointSolver::SkipToNextPointA() {
}

void UFortQueryTwoPointSolver::SetCustomRotationA(const FRotator& Rotation) {
}


FRotator UFortQueryTwoPointSolver::GetRandomRotationOffset() const {
    return FRotator{};
}

void UFortQueryTwoPointSolver::AddNamedFloatParamB(FName ParamName, float Value) {
}

void UFortQueryTwoPointSolver::AddNamedFloatParamA(FName ParamName, float Value) {
}

UFortQueryTwoPointSolver::UFortQueryTwoPointSolver() {
    this->QueryPointA = NULL;
    this->QueryPointB = NULL;
    this->RotationMode = ETwoPointSolverRotationA::PointAToQuerier;
    this->bUseNegativeAngleOffsets = false;
    this->bUsePositiveAngleOffsets = true;
    this->AISys = NULL;
    this->CachedQuerier = NULL;
}

