#include "FortSoundCameraLensEffect.h"

void AFortSoundCameraLensEffect::SetType(EFortSoundIndicatorTypes NewType) {
}

void AFortSoundCameraLensEffect::SetTintOverride(FLinearColor Color) {
}

void AFortSoundCameraLensEffect::SetStrengthCurve(const FRuntimeFloatCurve& Curve) {
}

void AFortSoundCameraLensEffect::SetInstigatingActor(const AActor* NewInstigator) {
}

void AFortSoundCameraLensEffect::SetIconOverride(UTexture* NewIcon) {
}

void AFortSoundCameraLensEffect::SetIcon(UTexture* NewIcon) {
}




AFortSoundCameraLensEffect::AFortSoundCameraLensEffect() {
    IndicatorType = EFortSoundIndicatorTypes::Generic;
    SnapToSections = 0;
    MaxAudibleDistanceOnSpawn = 1;
    InstigatingActor = NULL;
    IconOverride = NULL;
}

