#include "BuildingProp.h"

bool ABuildingProp::DestroyIfUnderwater(float MinSubmergedPercent) {
    return false;
}

void ABuildingProp::BP_GetEyesViewpoint_Implementation(FVector& OutLocation, FRotator& OutRotation) const {
}

float ABuildingProp::BlueprintModifyIncomingDamage_Implementation(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser) {
    return 0.0f;
}

ABuildingProp::ABuildingProp() {
    bDoNotBlockMarkerTraceWhenOverlappingPlayer = false;
    bSuppressSimpleInteractionWidgetForTouch = true;
    bKeepWhenUnderwater = false;
}

