#include "FortUICameraFramingFunctionLibrary.h"

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateVisibleItemDefinitionBoundsForCameraFraming(const UAthenaCharacterPartItemDefinition* ItemDefinition) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateComponentSetBoundsForCameraFraming(const TSet<USceneComponent*>& Components, bool bIgnoreHiddenOrNotVisibleComponents, bool bIncludePSCs) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateComponentBoundsForCameraFraming(USceneComponent* ParentComponent, const bool bIncludePSCs) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateCharacterCapsuleForCameraFraming(const ACharacter* Character) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetSettings UFortUICameraFramingFunctionLibrary::CalculateCharacterBoundsForZoomedCameraFraming(const AFortPlayerPawn* PlayerPawn) {
    return FFortUICameraFrameTargetSettings{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateCharacterBoundsForCameraFraming(const AFortPlayerPawn* PlayerPawn) {
    return FFortUICameraFrameTargetBounds{};
}

FFortUICameraFrameTargetBounds UFortUICameraFramingFunctionLibrary::CalculateActorBoundsForCameraFraming(const AActor* Actor, bool bIgnoreHiddenOrNotVisibleComponents, bool bIncludePSCs) {
    return FFortUICameraFrameTargetBounds{};
}

UFortUICameraFramingFunctionLibrary::UFortUICameraFramingFunctionLibrary() {
}

