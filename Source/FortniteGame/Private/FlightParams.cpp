#include "FlightParams.h"

FFlightParams::FFlightParams() {
    this->TopSpeedKmh = 0.00f;
    this->LiftoffSpeedKmh = 0.00f;
    this->ControlSpeedKmh = 0.00f;
    this->HeadingStabilizationRate = 0.00f;
    this->HeadingStabilizationMaxForwardVelocityKmh = 0.00f;
    this->HeadingStabilizationMaxDegPerSecond = 0.00f;
    this->VerticalStabilizationDrag = 0.00f;
    this->HorizontalStabilizationDrag = 0.00f;
    this->VerticalStabilizationTorque = 0.00f;
    this->MaxVerticalStabilizationTorque = 0.00f;
    this->HorizontalStabilizationTorque = 0.00f;
    this->MaxHorizontalStabilizationTorque = 0.00f;
    this->RotationalDampingCoefficient = 0.00f;
    this->MaxRotationalDampingTorque = 0.00f;
    this->TailLength = 0.00f;
    this->LowSpeedThrust = 0.00f;
    this->HighSpeedThrust = 0.00f;
    this->AntigravityHorizontal = 0.00f;
    this->AntigravityUp = 0.00f;
    this->AntigravityDown = 0.00f;
    this->ControlFrameHeight = 0.00f;
    this->ControlFrameDistance = 0.00f;
    this->ControlFrameDistanceInterpPerSecond = 0.00f;
    this->ControlFrameOrbitInterpPerSecond = 0.00f;
    this->ControlFrameRollInterpPerSecond = 0.00f;
    this->ControlFrameRollUpAcceleration = 0.00f;
    this->ControlFrameRollUpMaxVelocity = 0.00f;
    this->ControlFrameRollUpDamping = 0.00f;
    this->ControlFrameMinUpNudge = 0.00f;
    this->ControlFrameMaxUpNudge = 0.00f;
    this->ControlFrameUpsideDownIgnoreNudgePercent = 0.00f;
    this->SteerPitchRate = 0.00f;
    this->SteerYawRate = 0.00f;
    this->SteerMaxHeadingDiffDegrees = 0.00f;
    this->RollPerHeadingDiff = 0.00f;
    this->HeadingMatchRate = 0.00f;
    this->RollMatchRate = 0.00f;
    this->MatchingTorqueCap = 0.00f;
    this->StallVelocityLow = 0.00f;
    this->StallVelocityHigh = 0.00f;
    this->MinStallYawMultiplier = 0.00f;
    this->MaxStallYawMultiplier = 0.00f;
    this->StallHighVelocityDeviationAngle = 0.00f;
}

