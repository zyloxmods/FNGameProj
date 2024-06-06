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
    QueryPointA = NULL;
    QueryPointB = NULL;
    RotationMode = ETwoPointSolverRotationA::PointAToQuerier;
    bUseNegativeAngleOffsets = false;
    bUsePositiveAngleOffsets = true;
    AISys = NULL;
    CachedQuerier = NULL;
}

