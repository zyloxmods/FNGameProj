#include "FortPoiVolume.h"
#include "FortPoiCollisionComponent.h"

bool AFortPoiVolume::DoesShapeComponentOverlap(UShapeComponent* Shape) {
    return false;
}

bool AFortPoiVolume::ContainsLocationTag(const FGameplayTag& Tag) {
    return false;
}

AFortPoiVolume::AFortPoiVolume() {
    this->LargeGameVolume = 9000.00f;
    this->AudioBank = NULL;
    this->PoiCollisionComp = CreateDefaultSubobject<UFortPoiCollisionComponent>(TEXT("TestPrimComp0"));
}

