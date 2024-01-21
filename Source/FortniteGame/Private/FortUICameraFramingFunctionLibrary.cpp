#include "FortUICameraFramingFunctionLibrary.h"

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateComponentSetBoundsForCameraFraming(const TSet<USceneComponent*>& Components, bool bIgnoreHiddenOrNotVisibleComponents) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateComponentBoundsForCameraFraming(const USceneComponent* ParentComponent, const bool bIncludePSCs) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateCharacterCapsuleForCameraFraming(const ACharacter* Character) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateCharacterBoundsForCameraFraming(const AFortPlayerPawn* PlayerPawn) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateActorBoundsForCameraFraming(const AActor* Actor, bool bIgnoreHiddenOrNotVisibleComponents) {
    return FFortUICameraFrameTargetBounds{};
}

UFortUICameraFramingFunctionLibrary::UFortUICameraFramingFunctionLibrary() {
}

