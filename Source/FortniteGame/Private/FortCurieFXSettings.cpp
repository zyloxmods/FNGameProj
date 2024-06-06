#include "FortCurieFXSettings.h"

UFortCurieFXSettings::UFortCurieFXSettings() {
    GlowElementIdxPrimitiveDataIdx = 0;
    GlowLerpDataIdx = 0;
    CharredEffectPrimitiveDataIdx = 0;
    ElectricityArcTilingDivisorPrimitiveDataIdx = 0;
    ElectricityArcStartTimestampPrimitiveDataIdx = 0;
    ElectricityArcJumpDurationPrimitiveDataIdx = 0;
    ElectricityArcDurationBeforeFadeoutPrimitiveDataIdx = 0;
    ElectricityArcWPONoisePrimitiveDataIdx = 0;
    ElectricityArcWPONoiseWorldTileScalePrimitiveDataIdx = 0;
    ElectricityArcWPONoiseScalePrimitiveDataIdx = 0;
    ElectricityArcSplineWidthPrimitiveDataIdx = 0;
    ElectricityArcColorScalePrimitiveDataIdx = 0;
    ElectricityArcMaxPropagationLength = 1;
    ElectricityArcJumpDuration = 1;
    ElectricityArcLifetime = 1;
    ElectricityArcFadeoutDuration = 1;
    ElectricityArcSplineWidthFirstIteration = 1;
    ElectricityArcSplineWidthSubsequentIteration = 1;
    ElectricityArcColorScaleFirstIteration = 1;
    ElectricityArcColorScaleSubsequentIteration = 1;
    ElectricityArcRetriggerDelay = 1;
    ElectricityArcImpactFXDelay = 1;
    CharredStateInterpSpeed = 1;
    CharredStateFireAttachedFinalAlpha = 1;
    CharredStateNearFireFinalAlpha = 1;
    LandscapeCharredStateInterpSpeed = 1;
    MinLandscapeFireSphericalBounds = 1;
    MaxLandscapeFireSphericalBounds = 1;
    LandscapeFireRandomLocationRadius = 1;
    AmbientAudioFadeTime = 1;
}

