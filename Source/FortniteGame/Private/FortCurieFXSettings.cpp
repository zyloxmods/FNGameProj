#include "FortCurieFXSettings.h"

UFortCurieFXSettings::UFortCurieFXSettings() {
    this->GlowElementIdxPrimitiveDataIdx = 0;
    this->GlowLerpDataIdx = 0;
    this->CharredEffectPrimitiveDataIdx = 0;
    this->ElectricityArcTilingDivisorPrimitiveDataIdx = 0;
    this->ElectricityArcStartTimestampPrimitiveDataIdx = 0;
    this->ElectricityArcJumpDurationPrimitiveDataIdx = 0;
    this->ElectricityArcDurationBeforeFadeoutPrimitiveDataIdx = 0;
    this->ElectricityArcWPONoisePrimitiveDataIdx = 0;
    this->ElectricityArcWPONoiseWorldTileScalePrimitiveDataIdx = 0;
    this->ElectricityArcWPONoiseScalePrimitiveDataIdx = 0;
    this->ElectricityArcSplineWidthPrimitiveDataIdx = 0;
    this->ElectricityArcColorScalePrimitiveDataIdx = 0;
    this->ElectricityArcMaxPropagationLength = 1;
    this->ElectricityArcJumpDuration = 1;
    this->ElectricityArcLifetime = 1;
    this->ElectricityArcFadeoutDuration = 1;
    this->ElectricityArcSplineWidthFirstIteration = 1;
    this->ElectricityArcSplineWidthSubsequentIteration = 1;
    this->ElectricityArcColorScaleFirstIteration = 1;
    this->ElectricityArcColorScaleSubsequentIteration = 1;
    this->ElectricityArcRetriggerDelay = 1;
    this->ElectricityArcImpactFXDelay = 1;
    this->CharredStateInterpSpeed = 1;
    this->CharredStateFireAttachedFinalAlpha = 1;
    this->CharredStateNearFireFinalAlpha = 1;
    this->LandscapeCharredStateInterpSpeed = 1;
    this->MinLandscapeFireSphericalBounds = 1;
    this->MaxLandscapeFireSphericalBounds = 1;
    this->LandscapeFireRandomLocationRadius = 1;
    this->AmbientAudioFadeTime = 1;
}

