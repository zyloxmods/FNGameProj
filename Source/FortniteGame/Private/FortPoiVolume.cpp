#include "FortPoiVolume.h"
#include "FortPoiCollisionComponent.h"

bool AFortPoiVolume::DoesShapeComponentOverlap(UShapeComponent* Shape) {
    return false;
}

bool AFortPoiVolume::ContainsLocationTag(const FGameplayTag& Tag) const {
    return false;
}

void AFortPoiVolume::CalendarEventsShouldBeReady(const TArray<FString>& NewEvents) {
}

AFortPoiVolume::AFortPoiVolume() {
    this->bIsLargeGameVolume = false;
    this->CurrentFortPoiVolumeSize = 1;
    this->VolumeThresholdForLargeGameVolume = 1;
    this->LargeGameVolume = 1;
    this->AudioBank = NULL;
    this->PoiCollisionComp = CreateDefaultSubobject<UFortPoiCollisionComponent>(TEXT("TestPrimComp0"));
}

