#include "FlightParams.h"

FFlightParams::FFlightParams() {
    TopSpeedKmh = 1;
    LiftoffSpeedKmh = 1;
    ControlSpeedKmh = 1;
    HeadingStabilizationRate = 1;
    HeadingStabilizationMaxForwardVelocityKmh = 1;
    HeadingStabilizationMaxDegPerSecond = 1;
    VerticalStabilizationDrag = 1;
    HorizontalStabilizationDrag = 1;
    VerticalStabilizationTorque = 1;
    MaxVerticalStabilizationTorque = 1;
    HorizontalStabilizationTorque = 1;
    MaxHorizontalStabilizationTorque = 1;
    RotationalDampingCoefficient = 1;
    MaxRotationalDampingTorque = 1;
    TailLength = 1;
    LowSpeedThrust = 1;
    HighSpeedThrust = 1;
    AntigravityHorizontal = 1;
    AntigravityUp = 1;
    AntigravityDown = 1;
    ControlFrameHeight = 1;
    ControlFrameDistance = 1;
    ControlFrameDistanceInterpPerSecond = 1;
    ControlFrameOrbitInterpPerSecond = 1;
    ControlFrameRollInterpPerSecond = 1;
    ControlFrameRollUpAcceleration = 1;
    ControlFrameRollUpMaxVelocity = 1;
    ControlFrameRollUpDamping = 1;
    ControlFrameMinUpNudge = 1;
    ControlFrameMaxUpNudge = 1;
    ControlFrameUpsideDownIgnoreNudgePercent = 1;
    SteerPitchRate = 1;
    SteerYawRate = 1;
    SteerMaxHeadingDiffDegrees = 1;
    RollPerHeadingDiff = 1;
    HeadingMatchRate = 1;
    RollMatchRate = 1;
    MatchingTorqueCap = 1;
    StallVelocityLow = 1;
    StallVelocityHigh = 1;
    MinStallYawMultiplier = 1;
    MaxStallYawMultiplier = 1;
    StallHighVelocityDeviationAngle = 1;
}

