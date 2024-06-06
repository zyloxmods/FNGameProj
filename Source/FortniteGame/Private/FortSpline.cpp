#include "FortSpline.h"

void UFortSpline::SetupSpline(TArray<FVector> ControlPoints, float InDuration) {
}

void UFortSpline::SetDuration(float InDuration) {
}

bool UFortSpline::IsValid() const {
    return false;
}

float UFortSpline::GetVelocityCorrectedTime(float Time) const {
    return 0.0f;
}

FVector UFortSpline::GetTangentFromTime(float Time) const {
    return FVector{};
}

FVector UFortSpline::GetStartPoint() const {
    return FVector{};
}

float UFortSpline::GetSplineLengthAtTime(float Time, float StepSize) const {
    return 0.0f;
}

float UFortSpline::GetSplineLength(float StepSize) const {
    return 0.0f;
}

FVector UFortSpline::GetPositionFromTime(float Time) const {
    return FVector{};
}

FVector UFortSpline::GetNormalFromTime(float Time) const {
    return FVector{};
}

FVector UFortSpline::GetEndPoint() const {
    return FVector{};
}

float UFortSpline::GetDuration() const {
    return 0.0f;
}

FVector UFortSpline::GetBinormalFromTime(float Time) const {
    return FVector{};
}

void UFortSpline::EnableConstantVelocity(bool ConstVelEnabled) {
}

void UFortSpline::DrawDebugSpline(UObject* WorldContextObject, int32 Steps, float LifeTime, float Thickness, bool bPersistent, bool bJustDrawSpline, float BasisLength) {
}

void UFortSpline::ClearSpline() {
}

void UFortSpline::AddControlPoint(const FVector& Point, int32 Index) {
}

UFortSpline::UFortSpline() {
    bConstantVelocity = false;
}

