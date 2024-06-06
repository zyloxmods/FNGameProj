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
    bIsLargeGameVolume = false;
    CurrentFortPoiVolumeSize = 1;
    VolumeThresholdForLargeGameVolume = 1;
    LargeGameVolume = 1;
    AudioBank = NULL;
    PoiCollisionComp = CreateDefaultSubobject<UFortPoiCollisionComponent>(TEXT("TestPrimComp0"));
}

