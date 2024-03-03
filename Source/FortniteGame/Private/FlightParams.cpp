#include "FlightParams.h"

FFlightParams::FFlightParams() {
    this->TopSpeedKmh = 1;
    this->LiftoffSpeedKmh = 1;
    this->ControlSpeedKmh = 1;
    this->HeadingStabilizationRate = 1;
    this->HeadingStabilizationMaxForwardVelocityKmh = 1;
    this->HeadingStabilizationMaxDegPerSecond = 1;
    this->VerticalStabilizationDrag = 1;
    this->HorizontalStabilizationDrag = 1;
    this->VerticalStabilizationTorque = 1;
    this->MaxVerticalStabilizationTorque = 1;
    this->HorizontalStabilizationTorque = 1;
    this->MaxHorizontalStabilizationTorque = 1;
    this->RotationalDampingCoefficient = 1;
    this->MaxRotationalDampingTorque = 1;
    this->TailLength = 1;
    this->LowSpeedThrust = 1;
    this->HighSpeedThrust = 1;
    this->AntigravityHorizontal = 1;
    this->AntigravityUp = 1;
    this->AntigravityDown = 1;
    this->ControlFrameHeight = 1;
    this->ControlFrameDistance = 1;
    this->ControlFrameDistanceInterpPerSecond = 1;
    this->ControlFrameOrbitInterpPerSecond = 1;
    this->ControlFrameRollInterpPerSecond = 1;
    this->ControlFrameRollUpAcceleration = 1;
    this->ControlFrameRollUpMaxVelocity = 1;
    this->ControlFrameRollUpDamping = 1;
    this->ControlFrameMinUpNudge = 1;
    this->ControlFrameMaxUpNudge = 1;
    this->ControlFrameUpsideDownIgnoreNudgePercent = 1;
    this->SteerPitchRate = 1;
    this->SteerYawRate = 1;
    this->SteerMaxHeadingDiffDegrees = 1;
    this->RollPerHeadingDiff = 1;
    this->HeadingMatchRate = 1;
    this->RollMatchRate = 1;
    this->MatchingTorqueCap = 1;
    this->StallVelocityLow = 1;
    this->StallVelocityHigh = 1;
    this->MinStallYawMultiplier = 1;
    this->MaxStallYawMultiplier = 1;
    this->StallHighVelocityDeviationAngle = 1;
}

